/** 
 *  @file   main.c
 *  @brief  һ��LED��˸����
 *  @par    Copyright (c):  
 *          �Ͼ���ҵ��ѧ�Զ������������ѧԺ
 *  @par    �޸���־:
 *          �汾        ����        ����        ˵��
 *          v1.1        2011-12-12  ������    	
 */

#include "led.h"                  
#include "stm32f10x.h"                  // Device header

如果显示，则修改成功


void Delay(unsigned int t);	

/**
 *  ������ 
 *  @param  None
 *  @return None
 */
int main(void)
{
    LED_Initialize();    	
    while(1)
    {
        LED_On(0);	
        Delay(5000000); 		
        LED_Off(0);	
        Delay(5000000); 
    }
}

/**
 *  ��ʱ���� 
 *  @param [in]	t  ��ʱʱ�䣨ѭ��������
 *  @return None
 */
void Delay(unsigned int t)
{ 
    while(t--) ;	
}
