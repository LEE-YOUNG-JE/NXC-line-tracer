 task main() {

  SetSensorColorFull(IN_1);
 SetSensorLight(IN_2);
 SetSensorLight(IN_3);
 SetSensorLowspeed(IN_4);


 while(true) {

 int color=Sensor(IN_1);
 int lightL = Sensor(IN_2);
 int lightR = Sensor(IN_3);
 int d = SensorUS(IN_4);
 SetSensorType(IN_2, IN_TYPE_LIGHT_ACTIVE);
 SetSensorType(IN_3, IN_TYPE_LIGHT_ACTIVE);

 NumOut(4, 5, lightL);
 NumOut(4, 8, lightR);
 NumOut(20, 20, color);
 NumOut(30,30,d);

 if(lightL>55 && lightR>55 && color==1)  {  //일반 라인 이동
 /*until(lightR<55){
 OnRev(OUT_B,30);
 OnFwd(OUT_C,40);
 }  */
 OnFwd(OUT_BC,40); //25
 }
 else if(lightL<=55 && color==1) {


 OnRev(OUT_B,30);
 OnFwd(OUT_C,70);
 Wait(150);



 }
 else if(lightR<=55 && color==1) {

 OnFwd(OUT_B,40);
 OnRev(OUT_C,30);
   Wait(150);


 }

 else if(lightL<=55 && lightR<=55&& color==1) {
 //Off(OUT_BC);
 //Wait(1000);
         OnRevSync(OUT_BC, 45, -100);
         Wait(900);




 /* OnFwd (OUT_C,75);
   OnRev (OUT_B,40);
   Wait(150);
    OnFwd(OUT_BC,60);
   Wait(10);
   */
   continue;



 /*OnFwd(OUT_BC,50);
 Wait(10);
 while(1){
 if(lightL>55 &&  lightR>55){
    OnRevSync(OUT_BC, 85, -100);
    if(lightL>55 && lightR<55){
    break;
    }
 }
 }*/
//OnRevSync(OUT_BC, 85, -100);
//Wait(700);
  //OnRev(OUT_B,40);
 //OnFwd(OUT_C,70);


 }


 else if (lightL>55 && lightR>58 && color ==4 && d>15) {         //노랑

 OnRev(OUT_A,60);
  OnFwd(OUT_BC,30);
 }
 else if( lightL<55 && lightR>58 && color ==4 && d>15){
 OnRev(OUT_A,60);
 OnRev(OUT_B,45);
 OnFwd(OUT_C,75);
 Wait(250);
 
 }
 else if( lightL>55 && lightR<58 && color ==4 && d>15){
 OnRev(OUT_A,60);
 OnFwd(OUT_B,65);
 OnRev(OUT_C,35);
 }                                                //노랑끝


  else if( lightL>55 && lightR>58 && color ==4 && d<=15){
   OnFwd(OUT_BC,0);

 Wait(500);
 OnFwd(OUT_A,20);
 Wait(500);
 OnRev(OUT_BC,35);
 Wait(850);
 RotateMotor(OUT_B,50,260);
 RotateMotor(OUT_C,50,-210);
 Wait(1000);
 OnRev(OUT_BC,35);
 Wait(500);
 continue;


 }


 else if (lightL>55 && lightR>58 && color ==3 && d>15) {         //파랑

 OnRev(OUT_A,60);
  OnFwd(OUT_BC,30);
 }
 else if( lightL<55 && lightR>58 && color ==3 && d>15){
 OnRev(OUT_A,60);
 OnRev(OUT_B,30);
 OnFwd(OUT_C,50);
 }
 else if( lightL>55 && lightR<58 && color ==3 && d>15){
 OnRev(OUT_A,60);
 OnFwd(OUT_B,50);
 OnRev(OUT_C,30);
 }
 else if( lightL<55 && lightR<58 && color ==3  && d>15){

 OnFwd(OUT_BC,0);
 Wait(5000);
 break;
 

 }
 
  else if (lightL>55 && lightR>58 && color ==6 && d>15) {         //파랑오류

 OnRev(OUT_A,60);
  OnFwd(OUT_BC,30);
 }
 else if( lightL<55 && lightR>58 && color ==6 && d>15){
 OnRev(OUT_A,60);
 OnRev(OUT_B,30);
 OnFwd(OUT_C,50);
 }
 else if( lightL>55 && lightR<58 && color ==6 && d>15){
 OnRev(OUT_A,60);
 OnFwd(OUT_B,50);
 OnRev(OUT_C,30);
 }
 else if( lightL<55 && lightR<58 && color ==6  && d>15){

 OnFwd(OUT_BC,0);
 Wait(5000);
 break;


 }



 }  //while 끝
 }





