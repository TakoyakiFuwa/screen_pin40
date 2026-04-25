#define  HT  360 //335	  //Horizontal total period = (HT + 1) pixels
#define  HPS 16  //4	  //Horizontal Sync Pulse Start Position = (HPS + 1) pixels	 		 
#define  LPS 2	  //Horizontal Display Period Start Position = LPS pixels		
#define  HPW 2   //3  //Horizontal Sync Pulse Width = (HPW + 1) pixels	

#define  VT  500 //287	 //Vertical Total = (VT + 1) lines
#define  VPS 15   //16  //Vertical Sync Pulse Start Position = VPS lines					  
#define  FPS 2   //Vertical Display Period Start Position = FPS lines				  
#define  VPW 2   //9  //Vertical Sync Pulse Width = (VPW + 1) lines


void LCD_Init(void)
{
	unsigned char i;

    SPI_CS=0;
	
SPI_RES=1;
Delay(80);
SPI_RES=0;
Delay(80);
SPI_RES=1;
Delay(480);



SPI_WriteComm(0x11);     //Sleep Out

Delay(120);                

SPI_WriteComm(0x36);     
SPI_WriteData(0x00);   

SPI_WriteComm(0x3A);     //Interface Pixel Format
SPI_WriteData(0x66);   

SPI_WriteComm(0xF0);     // Command Set Control
SPI_WriteData(0xC3);   

SPI_WriteComm(0xF0);     
SPI_WriteData(0x96);   

SPI_WriteComm(0xB6); //ADD
SPI_WriteData(0xa0);
SPI_WriteData(0x02);
SPI_WriteData(0x3b);

SPI_WriteComm(0xB0);
SPI_WriteData(0x00);

SPI_WriteComm(0xB4);     
SPI_WriteData(0x01);   

SPI_WriteComm(0xB7);     
SPI_WriteData(0xC6);   

SPI_WriteComm(0xB9);     
SPI_WriteData(0x02);   
SPI_WriteData(0xE0);   

SPI_WriteComm(0xC0);     
SPI_WriteData(0x00);   //AVDD
SPI_WriteData(0x00);   //VGH VGL 

SPI_WriteComm(0xC1);     
SPI_WriteData(0x1B);   

SPI_WriteComm(0xC2);     
SPI_WriteData(0xA7);   

SPI_WriteComm(0xC5);     //VCOM Control	
SPI_WriteData(0x00);   

SPI_WriteComm(0xE8);     
SPI_WriteData(0x40);   
SPI_WriteData(0x8A);   
SPI_WriteData(0x00);   
SPI_WriteData(0x00);   
SPI_WriteData(0x33);   
SPI_WriteData(0x19);   
SPI_WriteData(0xA5);   
SPI_WriteData(0x33);   

SPI_WriteComm(0xE0);     //Positive Voltage Gamma Control
SPI_WriteData(0xF0);   
SPI_WriteData(0x09);   
SPI_WriteData(0x0F);   
SPI_WriteData(0x0D);   
SPI_WriteData(0x0D);   
SPI_WriteData(0x1C);   
SPI_WriteData(0x3D);   
SPI_WriteData(0x44);   
SPI_WriteData(0x55);   
SPI_WriteData(0x39);   
SPI_WriteData(0x18);   
SPI_WriteData(0x18);   
SPI_WriteData(0x36);   
SPI_WriteData(0x39);   

SPI_WriteComm(0xE1);     //Negative Voltage Gamma Control
SPI_WriteData(0xF0);   
SPI_WriteData(0x09);   
SPI_WriteData(0x0F);   
SPI_WriteData(0x09);   
SPI_WriteData(0x08);   
SPI_WriteData(0x01);   
SPI_WriteData(0x31);   
SPI_WriteData(0x33);   
SPI_WriteData(0x46);   
SPI_WriteData(0x09);   
SPI_WriteData(0x13);   
SPI_WriteData(0x13);   
SPI_WriteData(0x2A);   
SPI_WriteData(0x31);
   
SPI_WriteComm(0xF0);     
SPI_WriteData(0x3C);   

SPI_WriteComm(0xF0);     
SPI_WriteData(0x69); 

Delay(120);                // drv_msec_wait 120ms

SPI_WriteComm(0x35);     
SPI_WriteData(0x00);   

SPI_WriteComm(0x21);     

SPI_WriteComm(0x29);     // Display ON

SPI_WriteComm(0x2A);     
SPI_WriteData(0x00);   
SPI_WriteData(0x00);   
SPI_WriteData(0x01);   
SPI_WriteData(0x3F);   

SPI_WriteComm(0x2B);     
SPI_WriteData(0x00);   
SPI_WriteData(0x00);   
SPI_WriteData(0x01);   
SPI_WriteData(0xDF);   

SPI_WriteComm(0x2C);     


Delay(20); 

}
