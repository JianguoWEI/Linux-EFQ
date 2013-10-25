#include "test_lib.h"
#include <strings.h>
#include <stdio.h>
#include <error.h>
#include "linsched.h"

/* one minute */
#define TEST_TICKS 60000

void linsched_test_main(int argc, char **argv)
{
  int count, mask;
  struct linsched_topology topo;
  int type = parse_topology(argv[1]);

  topo = linsched_topo_db[type];

  // Allow all tasks to use any processor.
  mask = (1 << count) - 1;

  // Initialize the topology as provided by the script interpreter
  linsched_init(&topo);
  printf("my new test initilized ... \n");

  // Create five processor-bound tasks (sleep 10, busy 90)
  //create_tasks(5, mask, 10, 90);

  // Create five I/O-bound tasks (sleep 90, busy 10)
  //create_tasks(5, mask, 90, 10);
  
  linsched_create_normal_task( linsched_create_sleep_run(0,100), 90 );
  linsched_create_normal_task( linsched_create_sleep_run(0,100), 90 );

  // //Create a busy real-time round-robin task with a priority of 90
  //linsched_create_RTrr_task( linsched_create_sleep_run(0,100), 90 );
  //linsched_create_RTrr_task(linsched_create_sleep_run(0, 100), 90);
  //linsched_create_RTfifo_task(linsched_create_sleep_run(0, 100), 55);
  //linsched_create_RTrr_task(&linsched_announce_callback, 90);

  //create_tasks(1, mask, 0, 100);   
  //create_tasks(1, mask, 50, 50);

  // Run the simulation
  linsched_run_sim(TEST_TICKS);

  // Emit the task statistics./
  linsched_print_task_stats();

  return;
}

