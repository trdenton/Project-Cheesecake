//////////////////////////////////////////////////////////////////
//                                                              //
//    Application source                                        //
//    last edited by:  Kane Anderson                            //
//    date: January 17, 2012                                    //
//                                                              //
//////////////////////////////////////////////////////////////////

#include "Application.h"
#include "CDH/CDHApplication.h"
#include "COM/COMonCOM.h"
#include <stdio.h>

//////////////////////////////////

void application_initialize(void)
{
	// TODO
	printf("application_init(void)\n");
}

void application_main(void)
{
	// note:
	// CDH_PROCESSOR_COMPILE and COM_PROCESSOR_COMPILE
	// are #defined in ApplicationConfig.h
	
	if(CDH_PROCESSOR_COMPILE)
	{
		// the application which will run
		// on the CDH processor
		
		//printf("__we are the CDH processor__\n");		// we don't want this to print every loop
		CDH_application_main();
	}

	if(COM_PROCESSOR_COMPILE)
	{
		// the application which will run
		// on the COM processor
		//printf("__we are the COM processor__\n");		// we don't want this to print every loop
		//COM_application_main(); //TODO: make this function
	}
}

//////////////////////////////////
