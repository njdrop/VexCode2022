#include "vex.h"
using namespace vex;
competition Competition;

void pre_auton(void) {
  vexcodeInit();

}

void autonomous(void) {



}


void usercontrol(void) {
  
  while (1) {
//cringe
    LFdrive.spin(fwd, conMain.Axis3.value() + conMain.Axis1.value() + conMain.Axis4.value(), pct);
    LBdrive.spin(fwd, conMain.Axis3.value() + conMain.Axis1.value() - conMain.Axis4.value(), pct);
    RFdrive.spin(fwd, conMain.Axis3.value() - conMain.Axis1.value() - conMain.Axis4.value(), pct);
    RBdrive.spin(fwd, conMain.Axis3.value() - conMain.Axis1.value() + conMain.Axis4.value(), pct);
    



    wait(20, msec);
  }
}


int main() {
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);
  pre_auton();
  while (true) {
    wait(100, msec);
  }
}
