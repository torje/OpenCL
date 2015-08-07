#include <CL/opencl.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  cl_device_id device_id;
  cl_context context;
  cl_command_queue command_queue;
  cl_program program;
  cl_kernel kernel;
  
  
  cl_mem to_dev;
  cl_mem from_dev;
  

  int error_cl;
  
  struct { cl_uint entries; cl_platform_id platform_id; cl_uint count ; } platformInfo= { 1, 0, 0 };
  

  platformInfo.platform_id = calloc( platformInfo.count, sizeof(cl_platform_id));

  error_cl = clGetPlatformIDs( 1, & platformInfo.platform_id, & platformInfo.count);
  if ( CL_SUCCESS != error_cl ){
    printf("failed to get platforms\n");
    return 0;
  }
  printf ("platformInfo.count: %du \n", platformInfo.count);

  return 0;
}
