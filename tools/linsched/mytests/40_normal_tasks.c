#include "test_lib.h"
#include <strings.h>
#include <stdio.h>
#include <error.h>
#include "linsched.h"	

/* one minute */
#define TEST_TICKS 600

void linsched_test_main (int argc, char **argv)
{
  int count, mask;
  struct linsched_topology topo;
  int type = parse_topology(argv[1]);

  topo = linsched_topo_db[type];

  // Allow all tasks to use any processor.
  mask = (1 << count) - 1;

  // Initialize the topology as provided by the script interpreter
  linsched_init(&topo);
  int i;
  for (i = 0 ; i < 40 ; i++) {
    linsched_create_normal_task( linsched_create_sleep_run(0,100), i-20 );
  }

  // Run the simulation
  linsched_run_sim(TEST_TICKS*10);

  // Emit the task statistics
  linsched_print_task_stats();

  return;
}

