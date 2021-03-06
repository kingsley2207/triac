#include <main.h>
#define LCD_ENABLE_PIN PIN_E0
#define LCD_RS_PIN PIN_E1
#define LCD_RW_PIN PIN_E2
#define LCD_DATA4 PIN_D4
#define LCD_DATA5 PIN_D5
#define LCD_DATA6 PIN_D6
#define LCD_DATA7 PIN_D7

#include <lcd.c>

//!void main()
//!{ 
//!
//!setup_adc(ADC_CLOCK_INTERNAL);
//!setup_adc_ports(sAN0);
//!setup_adc_ports(sAN1);
//!set_adc_channel(0);
//!set_adc_channel(1);
//!lcd_init();
//!
//!lcd_gotoxy(1,2);
//!   while(TRUE)
//!   {
//!    set_adc_channel(0);
//!    int16 a = read_adc();
//!    printf(lcd_putc,"Analog2: %4ld",a);
//!    lcd_gotoxy(1,1);
//!    delay_ms(300);
//!    
//!    set_adc_channel(1);
//!    int16 b = read_adc();
//!    printf(lcd_putc,"Analog1: %4ld",b);
//!    lcd_gotoxy(1,2);
//!    delay_ms(300);
//!    
//!   }
//!
//!}

//!unsigned int t=7500;
//!void quet_nut();
//!#INT_RB
//! VOID ngat_ngoai()
//! {
//!    quet_nut();
//! }
//! void quet_nut()
//! {
//! if (input(PIN_B4)==0) //neu nut bam duoc bam
//!   {  delay_us(50);
//!      t=t+1500;
//!      if(t>=8000) {t=8500;}
//!   }
//! if (input(PIN_B3)==0) //neu nut bam duoc bam
//!   {  delay_us(50);
//!      t=t-1500;
//!      if(t<1000) {t=500;}
//!   }
//! }
 void main()
{   //output_low(PIN_C5);

//!    output_low(PIN_D0);
    setup_adc(ADC_CLOCK_INTERNAL);
    setup_adc_ports(sAN0);
    set_adc_channel(0);
//!    
//!    enable_interrupts (INT_RB); //Cho phep ngat ngoai
//!    enable_interrupts (INT_EXT_H2L); //Ngat xay ra khi co xung tu cao xuong thap
//!    enable_interrupts (GLOBAL); //Cho phep ngat
//!    sleep();

   while (TRUE)
   {
   //output_high(PIN_D0);
   //set_adc_channel(0);
   
   int16 a = read_adc();
   delay_us(5);
   if (a>65)
      {
      delay_us(7500); //thay t = 1500 - 7500 thi do sang cao toi thap
      output_high(PIN_D0);
      delay_us(500);
      output_low(PIN_D0);
      }
   }

//!void quet_phim()
//!{   int16 t=350;
//!    if (input(PIN_D0)==0) //neu nut bam duoc bam
//!    {  delay_us(50);
//!       output_high(PIN_C5); delay_ms(t); output_low(PIN_C5);
//!    }
    
//!    else if (input(PIN_D1)==0) //neu nut bam duoc bam
//!    {
//!       output_high(PIN_C0); delay_ms(t); output_low(PIN_C0);
//!    }
//!
//!    else if (input(PIN_D2)==0) //neu nut bam duoc bam
//!    {
//!       output_high(PIN_C0); delay_ms(t); output_low(PIN_C0);
//!    }
//!    else if (input(PIN_D3)==0) //neu nut bam duoc bam
//!    {
//!       output_high(PIN_C0); delay_ms(t); output_low(PIN_C0);
//!    }
//!    
//!    else if (input(PIN_D4)==0) //neu nut bam duoc bam
//!    {
//!       output_high(PIN_C0); delay_ms(t); output_low(PIN_C0);
//!    }
//!    
//!    else if (input(PIN_D5)==0) //neu nut bam duoc bam
//!    {
//!       output_high(PIN_C0); delay_ms(t); output_low(PIN_C0);
//!    }
//!    
//!    else if (input(PIN_D6)==0) //neu nut bam duoc bam
//!    {
//!       output_high(PIN_C0); delay_ms(t); output_low(PIN_C0);
//!    }
//!    
//!    else if (input(PIN_D7)==0) //neu nut bam duoc bam
//!    {
//!       output_high(PIN_C0); delay_ms(t); output_low(PIN_C0);
//!    }
  
}

