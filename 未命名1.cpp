//#pragma warning(disable:4996)
//#include<stdio.h>
//#include <dos.h>
//#include<stdlib.h>
//#include<conio.h>
//#include<thread> 
//#define TRUE 1
//#define FALSE 0
//#define INVALID -1
//#define NULL 0
//#define total_instruction 320     /*  指令流长  */
//#define total_vp 32             /*  虚页长 */
//#define clear_period 50          /*  清零周期  */
////#define FALSE 0
////#define TRUE 1
//typedef struct                  /*  页面结构  */
//{ 
//  int pn, pfn, counter, time;
//}p1_type;
//p1_type p1[total_vp];           /*  页面结构数组  */ 
//struct pfc_struct                /*  页面控制结构  */
//{ 
// int pn, pfn,pfc;
// struct pfc_struct *next;
//};
//typedef struct pfc_struct pfc_type;
//pfc_type pfc[total_vp], *freepf_head, *busypf_head, *busypf_tail;
//int diseffect, a[total_instruction];
//int page[total_instruction],offset[total_instruction];
//void initialize();
//void FIFO( );
//void LRU( );
//void OPT( );
//void LFU( );
//void NUR( );
//void getid();
//
//
// void FIFO()                          /*  用户进程的内存页面数  */
//{  
//  int total_pf;   
//  int i,j;
//  int disaffect=0;
//  int freep_headf;
//  pfc_type *p, *t;
//   initialize();                /* 初始化相关页面控制用数据结构*/
//   busypf_head=busypf_tail=NULL;   /*  忙页面队列头,队列尾链接  */
//   for(i=0;i=total_instruction;i++)
//    {  
//	if(p1[page[i]].pfn==INVALID)         /*  页面失效  */
//         { 
//		 disaffect+=1;                     /*  失效次数  */
//            if(freep_headf==NULL)         /*  无空闲页面  */
//              { p=busypf_head->next;
//                p1[busypf_head->pn].pfn=INVALID;
//                freepf_head=busypf_head; /*释放忙页面队列中的第一个页面*/
//                freepf_head->next=NULL;
//                busypf_head=p;
//               }
//            p=freepf_head->next;     /* 按FIFO方式调新页面入内存页面 */
//            freepf_head->next=NULL;
//			 freepf_head->pn=page[i];
//            p1[page[i]].pfn=freepf_head->pfn;
//            if(busypf_tail==NULL)
//              busypf_head=busypf_tail=freepf_head;
//            else
//                {  busypf_tail->next=freepf_head;
//                   busypf_tail=freepf_head;
//                }
//            freepf_head=p;
//           }
//       }
//     printf("FIFO:%6.4f",1-(float)disaffect/320);
//}
//
//void LRU()
//{ 
//int min,minj,i,j,present_time;
//int total_pf;
//int disaffect=0;
// initialize();
// present_time=0;
// for(i=0;i<total_instruction;i++)
//{ 
//  if(p1[page[i]].pfn==INVALID)               /* 页面失效 */
//   {  
//    disaffect++;
//      if(freepf_head==NULL)                /* 无空闲页面 */
//        { min=32767;
//          for(j=0;j<total_vp;j++)
//          if(min>p1[j].time&&p1[j].pfn !=INVALID)
//            { min=p1[j].time;minj=j;
//            }
//           freepf_head=&pfc[p1[minj].pfn];
//           p1[minj].pfn=INVALID;
//           p1[min].time=-1;
//           freepf_head->next=NULL;
//          }
//       p1[page[i]].pfn=freepf_head->pfn;
//       p1[page[i]].time=present_time;
//       freepf_head=freepf_head->next;
//      }
//   else
//    p1[page[i]].time=present_time;
//    present_time++;
//  }
//printf("LRU:%6.4f",1-(float)disaffect/320);
//}
//
//void NUR()
//{ 
//int total_pf;
// int disaffect=0;
//int i,j,dp,cont_flag,old_dp;
// pfc_type  *t;
// initialize();
// dp=0;
// for(i=0;i<total_instruction;i++)
//  { if(p1[page[i]].pfn==INVALID)             /* 页面失效 */
//     { diseffect++;
//       if(freepf_head==NULL)               /* 无空闲页面 */
//         { cont_flag=TRUE;
//           old_dp=dp;
//           while(cont_flag)
//           if(p1[dp].counter==0 && p1[dp].pfn!=INVALID)
//           cont_flag=0;
//           else
//            { dp++;
//              if(dp==total_vp)
//                dp=0;
//              if(dp==old_dp)
//                 for(j=0;j<total_vp;j++)
//                  p1[j].counter=0;
//               }
//           freepf_head=&pfc[p1[dp].pfn];
//           p1[dp].pfn=INVALID;
//           freepf_head->next=NULL;
//          }
//        p1[page[i]].pfn=freepf_head->pfn;
//        freepf_head=freepf_head->next;
//      }
//  else
//    p1[page[i]].counter=1;
//    if(i%clear_period==0)
//     for(j=0;j<total_vp;j++)
//      p1[j].counter=0;
//  }
//printf("NUR:%6.4f",1-(float)disaffect/320);
//}
//
//void OPT()
//
//{ 
// int disaffect=0;
// int i,j,max,maxpage,d,dist[total_vp];
//  int total_pf;
//  pfc_type  *t;
//  initialize();
//  for(i=0;i<total_instruction;i++)
//   { if(p1[page[i]].pfn==INVALID)
//      {  
//	    diseffect++;
//        if(freepf_head==NULL)
//          { for(j=0;j<total_vp;j++)
//            if(p1[j].pfn !=INVALID)
//              dist[j]=32767;
//            else
//             dist[j]=0;
//            d=1;
//            for(j=i+1;j<total_instruction;j++)
//             { 
//			   if(p1[page[j]].pfn!=INVALID)
//               dist[page[j]]=d;
//               d++;
//             }
//            max=-1;
//            for(j=0;j<total_vp;j++)
//            if(max<dist[j])
//              { 
//			    max=dist[j];
//                maxpage=j;
//               }
//             freepf_head=&pfc[p1[maxpage].pfn];
//             freepf_head->next=NULL;
//             p1[maxpage].pfn=INVALID;
//           }
//     p1[page[i]].pfn=freepf_head->pfn;
//     freepf_head=freepf_head->next;
//    }
//   }
//  printf("OPT:%6.4f",1-(float)disaffect/320);
//}
//
//void LFU()
//{ 
// int disaffect=0;
//  int i,j,min,minpage;
//  int total_pf;
// pfc_type  *t;
// initialize();
// for(i=0;i<total_instruction;i++)
//  { if(p1[page[i]].pfn==INVALID)
//     {disaffect++;
//      if(freepf_head==NULL)
//        { min=32767;
//         for(j=0;j<total_vp;j++)
//            { if(min>p1[i].counter&&p1[j].pfn!=INVALID)
//               { min=p1[j].counter;
//                 minpage=j;
//                }
//               p1[j].counter=0;
//             }
//          freepf_head=&pfc[p1[minpage].pfn];
//          p1[minpage].pfn=INVALID;
//          freepf_head->next=NULL;
//        }
//      p1[page[i]].pfn=freepf_head->pfn;
//      freepf_head=freepf_head->next;
//    }
//  else
//    p1[page[i]].counter++;
//  }
//printf("LFU:%6.4f",1-(float)disaffect/320);
//}
//
//void initialize()                       /* 初始化相关数据结构 */                             /* 用户进程的内存页面数 */
//{ 
//  int total_pf; 
//  int i;
//  int disaffect=0;
//  for(i=0;i<total_vp;i++)
//  {
//   p1[i].pn=i; p1[i].pfn=INVALID;  /* 置页面控制结构中的页号,页面为空 */
//   p1[i].counter=0;p1[i].time=-1; /*页面控制结构中的访问次数为0,时间为-1*/
//  }
//  for(i=1;i<total_pf;i++)  
//    { 
//	pfc[i-1].next=&pfc[i];pfc[i-1].pfc=i-1; /*建立pfc[i-1]和pfc[i]之间的链接*/
//    }
//}
//int main( )
//{ 
//  int S,i,j;
//   srand(getid()); 
///* 由于每次运行时进程号不同,故可用来作为初始化随机数队列的"种子"  */
//S=(float)319*rand( )/32767+1;
//for(i=0;i<total_instruction;i+=4)      /*产生指令队列 */
//{  a[i]=S;                        /* 任选一指令访问点 */
//     a[i+1]=a[i]+1;                  /* 顺序执行一条指令 */
//     a[i+2]=(float)a[i]*rand( )/32767;   /* 执行前地址指令  */
//     a[i+3]=a[i+2]+1;                /* 执行后地址指令  */
//     S=(float)rand( )*(318-a[i+2])/32767+a[i+2]+2;
//}
//for(i=0;i< total_instruction;i++)      /* 将指令序列变换成页地址流*/
//{   page[i]=a[i]/10;
//     offset[i]=a[i]%10;
//}
//for(i=4;i<=32;i++)           /* 用户内存工作区从4个页面到32个页面 */
//{ 
// printf("%2d page frames",i);
// FIFO();
// LRU();
// OPT();
// LFU();
// NUR();
// printf("\n");
//}
//}
