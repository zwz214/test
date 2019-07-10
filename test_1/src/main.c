#include <stdio.h>
#include "marco1.h"
int main(void)                                                              //misra要求()里必须写void
{ int_32 i;                                                                 //misra要求变量也要对齐
  int_32 j;                                                                 //misra禁止使用标准变量类型（int，char等）直接定义变量
  float_32 h;
  input_stu();
  aver_stu();
  aver_cour();
  (void)printf("\n  NO. cour1   cour2   cour3   cour4   cour5   aver\n");   //void 表示printf的返回类型
  for(i=0;i<N;i++)
  {
    (void)printf("\n NO %2d ",i+1);                                         //misra禁止试用标准库里的输入输出函数
    for (j = 0; j < M; j++)
    {
      (void)printf("%8.2f", score[i][j]);                                   //缩进对齐要求缩进两个字节
    }
    (void)printf("%8.2f\n",a_stu[i]);
  }                                                                         //test
  (void)printf("\naverage:");       
  for (j = 0; j < M; j++)
  {
    (void)printf("%8.2f", a_cour[j]);                                     
  }
	  
  (void)printf("\n");
  h=highest();
  (void)printf("highest:%7.2f   NO. %2d   course %2d\n",h,r,c);
  (void)printf("variance %8.2f\n",s_var());
  return 0;
}
                                                                            //最后一行不能为括号