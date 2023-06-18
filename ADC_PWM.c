unsigned int period,



void kurulum(){

         GPIO_Digital_Input(GPIOA_BASE,_GPIO_PINMASK_1|GPIOA_BASE,_GPIO_PINMASK_2|GPIOA_BASE,_GPIO_PINMASK_3);
         GPIO_Digital_Output(GPIOA_BASE,_GPIO_PINMASK_4);
         ADC1_Init();
         ADC_Set_Input_Channel(_ADC_CHANNEL_1);
         period=PWM_TIM4_INIT(10000);
         PWM_TIN4_Set_Duty()period/100)*0,_PWM_NON_INVERTED,_PWM_CHANNEL2);
         PWM_TIM4_Start(_PWM_CHANNEL2,_GPIO_MODULE_TIM4_CH2_PA4);
}

void main() {
           kurulum();
           while(1){
           okunan=ADC1_Get_Sample(1);
           PWM_TIM4_Set_Duty((period/1024)*okunan,_PWM_NON_INVERTED,_PWM_CHANNEL2);
           if (_GPIO_PINMASK_A1=1){ PWM_TIM4_Set_Duty((period/1024)*okunan*110/100,_PWM_NON_INVERTED,_PWM_CHANNEL2); }
           if (_GPIO_PINMASK_A2=1){ PWM_TIM4_Set_Duty((period/1024)*okunan*120/100,_PWM_NON_INVERTED,_PWM_CHANNEL2); }
           if (_GPIO_PINMASK_A3=1){ PWM_TIM4_Set_Duty((period/1024)*0,_PWM_NON_INVERTED,_PWM_CHANNEL2); }
           delay_ms(150);}
}
