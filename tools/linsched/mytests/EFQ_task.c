#include "test_lib.h"
#include <strings.h>
#include <stdio.h>
#include <error.h>
#include "linsched.h"
#include <stdlib.h>

/* one minute */
#define TEST_TICKS 600
#define random(Min,Max) ((rand()%(Max-Min+1))+Min) 

void linsched_test_main(int argc, char **argv)
{
  int count, mask,i,j;
  struct linsched_topology topo;
  int type = parse_topology(argv[1]);
  int seed = atoi(argv[2]);
  /*FILE *output;
  output = fopen("output.txt","a+");
  fprintf(output,"EFQ TEST...\n");
  fclose(output);*/

  topo = linsched_topo_db[type];

  // Allow all tasks to use any processor.
  mask = (1 << count) - 1;

  // Initialize the topology as provided by the script interpreter
  
  linsched_init(&topo);
  printf("my EFQ test initilized ... \n");
  
//  linsched_create_normal_task( linsched_create_sleep_run_energy(0,10,8,0,0,0),0 );
//  linsched_create_normal_task( linsched_create_sleep_run_energy(2,8,8,0,8,0),0 );

//  linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,10,8,0,0,0),4);
//  linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(5,5,8,0,12,0),1);

 /* srand ( 67 );
  for(i=0; i<100; i++)
{
  j = random(2,6);
  printf("random number is %d\n", j);
}
*/
  //linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );

 // linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );
 /* linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );
  linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );
  linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );
  linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );
  linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );
  linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );
  linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );
 */
  //linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );
  //linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );
 //linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );
  //linsched_run_sim(10);
  //linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(4,6),1 );
  //linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(40,60),3 );

 //linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_rt(10,3,1), 0.4, 0, 0 );
 // linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_rt(10,3,1), 0.5, 0, 0 );
//linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_interactive(15,2,3,1), 0.5, 0, 0 );

//linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_interactive(50,10,5,0), 0.10, 5000000, 6, 11);
//linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_interactive(50,0,5,0), 0.10, 0, 0, 11);

//linsched_create_EFQ_task_interactive_weight(linsched_create_sleep_run_interactive(50,0,6,0), 1, 6000000, 6, 11);

//linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_rt(100,10,5), 0.15, 0, 0, 6);

 // linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_rt(10,3,1), 0.3, 100000000, 4, 6);
 //linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_rt(10,3,1), 0.3, 90000000, 4,6 );

/* for (i = 0 ; i < 40 ; i++) {
    linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100), 1 );
  }
*/

//linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );

 //linsched_run_sim(19);

//linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(0,100),1 );


srand (seed);
/*
linsched_create_RTrr_task( linsched_create_sleep_run_rt_IO(10, 3, 0, 2, 10, 0, 15), 90 );
linsched_create_normal_task( linsched_create_sleep_run_interactive_IO(50, 0, 10, 10, 0, 5, 0, 10), 7); // interactive task is cheated as normal task
linsched_create_normal_task( linsched_create_sleep_run_energy(0,10,8,0,0,0), 0);
//linsched_run_sim(2000);
linsched_create_normal_task( linsched_create_sleep_run_energy(6,4,8,0,10,0), 4);
*/
/*
linsched_create_RTrr_task( linsched_create_sleep_run_rt(10, 3, 1, 10, 3), 90 );
linsched_create_normal_task( linsched_create_sleep_run_interactive(50, 0, 10, 0, 5, 0), -19); // interactive task is cheated as normal task
linsched_create_normal_task( linsched_create_sleep_run_energy(0,10,8,0,0,0), 0);
*/

//linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_rt(10, 3, 0, 10, 0), 0.375, 8000000000, 0, 0 );
//linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_interactive(50, 0, 10, 0, 5, 0), 0.125, 2000000000, 0, 0 );
/*linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_rt(10, 3, 0, 10, 0), 0.375, 0, 0, 0 );
linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_interactive(50, 0, 10, 0, 5, 0), 0.125, 0, 0, 0 );
linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,0,0,0),3 );
linsched_run_sim(2000);
linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(2,8,8,0,12,0),2 );
*/

//linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_interactive_IO(10, 0, 3, 2, 0, 10, 0, 10), 0.2, 0, 0, 0 );

linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_rt_IO(10, 3, 0, 2, 10, 0, 15), 0.2, 0, 0, 0 );
linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_interactive_IO(50, 0, 10, 10, 0, 5, 0, 10), 0.1, 0, 0, 0 );
//linsched_create_EFQ_task_interactive_weight( linsched_create_sleep_run_interactive_IO(10, 0, 3, 0, 0, 5, 0, 0), 1, 0, 0, 0 );

linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,10,8,0,0,0),5);
//linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(8,2,8,0,5,0),3 );
linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(6,4,8,0,10,0),2);

//linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_interactive_IO(50, 0, 10, 10, 0, 5, 0, 10), 0.6, 0, 0, 0 );
//linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,10,8,0,0,0),1);


/*
linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_rt(10, 3, 1, 10, 3), 0.375, 8000000000, 0, 0 );

linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_interactive(50, 10, 10, 4, 5, 2), 0.125, 2000000000, 0, 0 );



//linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_interactive(20, 5, 4, 2, 5, 2), 0.125, 8000000000, 0, 0 );

/*
linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_rt(10, 3, 1, 10, 3), 0.375, 0, 0, 0 );

linsched_create_EFQ_task_rt_interactive_share( linsched_create_sleep_run_interactive(50, 10, 10, 4, 5, 2), 0.125, 0, 0, 0 );

*/


//linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,1,0,0),1 );

//linsched_run_sim(2000);

//linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,3,0,0),1 );

//linsched_run_sim(2000);

//linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,3),2 );

/*
linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,2,0,0),1 );
linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,4,0,0),1 );
linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,1,0,0),1 );
linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,4,0,0),1 );
linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,3,0,0),1 );
linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,1,0,0),1 );
linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,2,0,0),1 );
linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,3,0,0),1 );

for (i = 0 ; i < 50 ; i++) {
    linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,8,0,0,0), 1 );
  }
*/
//linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,5,2),2);

//linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run_energy(0,100,20,4),3);
  

  //linsched_create_EFQ_task_rt_share( linsched_create_sleep_run(0,100), 0.2, 0, 0 );
  
  
  //linsched_create_EFQ_task_batch( linsched_create_sleep_run(0,10), 1 );
  //linsched_create_EFQ_task_batch( linsched_create_sleep_run(0,10), 2 );
  //linsched_create_EFQ_task_interactive( linsched_create_sleep_run(15,3), 0, 6000000, 0);
  //linsched_create_EFQ_task_rt( linsched_create_sleep_run(5,5), 0, 15000000, 5000000 );
  //linsched_create_EFQ_task_rt( linsched_create_sleep_run(0,10), 0, 0, 0 );
  
  // Create a busy real-time round-robin task with a priority of 90
  /*  linsched_create_normal_task(linsched_create_sleep_run(0,100), 1);
    linsched_create_normal_task(linsched_create_sleep_run(0,100), 1);
    linsched_create_normal_task(linsched_create_sleep_run(0,100), 1);
    linsched_create_normal_task(linsched_create_sleep_run(5,8), -4);
    linsched_create_normal_task(linsched_create_sleep_run(3,6), -4);*/
  //linsched_create_RTrr_task( linsched_create_sleep_run(0,100), 90 );
  //linsched_create_RTrr_task(linsched_create_sleep_run(0, 100), 90);
  //linsched_create_RTfifo_task(linsched_create_sleep_run(0, 100), 55);
  //linsched_create_RTrr_task(&linsched_announce_callback, 90);
  //linsched_run_sim(10);
  //linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(9000,1000), 2);
  linsched_run_sim(100000);
  //linsched_run_sim(10000000);
  //create_tasks(1, mask, 0, 100);   
  //create_tasks(1, mask, 50, 50);
  //linsched_run_sim(10);
  //linsched_create_EFQ_task_batch_weight( linsched_create_sleep_run(4000,1000), 3);
  //linsched_run_sim(9990);
  //linsched_create_EFQ_task_batch( linsched_create_sleep_run(0,10), 0 );
  // Run the simulation
  //linsched_run_sim(TEST_TICKS);
  //linsched_run_sim(50);
 /* for(i=0; i<50; i++)
  {
	  linsched_run_sim(200);
	 /* linsched_print_task_stats_periodical();
	  output = fopen("output","a+");
          fprintf(output,"\n");
	  fclose(output);
  }
*/
  // Emit the task statistics./
  linsched_print_task_stats();
 
  return;
}

