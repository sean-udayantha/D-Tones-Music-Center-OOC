#include "customer.h"
#include "delivery.h"
#include "instrument.h"
#include "order.h"
#include "payment.h"
#include "regCustomer.h"
#include "schoolOfMusic.h"
#include "student.h"
#include "userDetails.h"
#include <cstring>
#include <iostream>
using namespace std;

int main() {
	//===============anithama kalla========//

	customer *c[2];
	c[0] = new customer(
		"Aroshana",
		"997542371V",
		"Bandarawela",
		779963878,
		"useraroshana",
		"passwordaroshana");
	c[1] = new customer(
		"Sithara",
		"997942371V",
		"Bandarawela",
		705924955,
		"usersithara",
		"passwordsithara");

	regCustomer r1, r2;
	r1.login(
		"useraroshana",
		"passwordaroshana",
		c[0]->getUsername(),
		c[0]->getPassword());
	r2.login(
		"usersithara",
		"passwordsithara",
		c[1]->getUsername(),
		c[1]->getPassword());

	student s1, s2;
	s1.schoolRegister(
		"Sean", "981234567V", 775472705, "Guitar", "usersean", "passwordsean");
	s2.schoolRegister(
		"Vishwa",
		"991234567V",
		717047441,
		"Piano",
		"uservishwa",
		"passwordvishwa");

	s1.studentLogin("usersean", "passwordsean");
	s2.studentLogin("uservishwa", "passwordvishwa");

	school *school1;
	school1 = new school(s1.getName(), s2.getName());
	school1->DisplayStudents();
	s1.studentDetails();
	s2.studentDetails();
	delete school1;

	userDetails user1(c[0]);
	userDetails user2(c[1]);
	user1.Displaydetails();
	user2.Displaydetails();

	instrument *i[1];
	i[0] = new instrument(300, "piano", 200000.00);

	order *o[1];
	o[0] = new order(253, 2, i[0]);

	c[0]->Reg(o[0]);
	c[0]->printdetails();

	payment payment1("BOC_bank", 188235543, 552, "kevin", 1111, 20000.00, o[0]);

	regCustomer *rg1 = new regCustomer(123);

	payment1.createDiscount(1, rg1);
	payment1.validationDisplay();
	payment1.display();

	payment *p1 =
		new payment("BOC_bank", 188235543, 552, "kevin", 1111, 20000.00, o[0]);
	delivery *d1 = new delivery(
		"kevin", "maduwalpathana,Banadarwela,", 64537, 775488931, 444);

	d1->createDelivery(5, 1, p1);
	d1->DisplayDeliveryDetails();

	delete p1;
	delete d1;

	//===============anithama kalla========//

	// instrument *i[1];
	// i[0] = new instrument(300,"piano",200000.00);
	// i[0]->displayDetails();

	// order *o[1];
	// o[0] = new order(253,2,i[0]);
	// o[0]->displayOdetails();

	// payment payment1("BOC_bank",188235543,552,"kevin",1111,20000.00,o[0]);
	// payment1.validationDisplay();
	// payment1.display();

	// order o1(253,2,i[0],p[0]);
	// o1->placeOrder(p);
	//

	// cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

	// order *o = new order(253,2,i);

	// delete i;
	// delete o;
	// customer d1;
	// d1.Reg(o);
	// d1.printdetails();

	/*//====================================================================
	customer *c[2];
	  c[0] = new customer("Aroshana", "997542371V", "Bandarawela",
	779963878,"useraroshana", "passwordaroshana"); c[1] = new
	customer("Sithara", "997942371V", "Bandarawela", 705924955,"usersithara",
	"passwordsithara");

	  userDetails user1(c[0]);
	  userDetails user2(c[1]);

	  user1.Displaydetails();
	  user2.Displaydetails();

	regCustomer r1,r2;
	  r1.login("useraroshana",
	"passwordaroshana",c[0]->getUsername(),c[0]->getPassword());
	  r2.login("usersithara",
	"passwordsithara",c[1]->getUsername(),c[1]->getPassword());

	student s1,s2;
		s1.schoolRegister("Sean", "981234567V", 775472705, "Guitar", "usersean",
	"passwordsean"); s1.studentLogin("usersean", "passwordsean");
		s2.schoolRegister("Vishwa", "991234567V", 717047441, "Piano",
	"uservishwa", "passwordvishwa"); s2.studentLogin("uservishwa",
	"passwordvishwa");

	school *school1;
		school1 = new school(s1.getName(), s2.getName());
		school1 -> DisplayStudents();
		s1.studentDetails();
		s2.studentDetails();
		delete school1;
	//====================================================================*/  /*  
 
  payment *p1 = new payment("BOC_bank",188235543,552,"kevin",1111,20000.00,o[0]);  
  delivery *d1 = new delivery("kevin","maduwalpathana,Banadarwela,",64537,775488931,444);
  
  d1->createDelivery(5,1,p1);
  d1->DisplayDeliveryDetails();

  delete p1;
  delete d1;  



customer *c2[2];

c2[0] = new customer("Aroshana", "997542371V", "Bandarawela", 779963878,"useraroshana", "passwordaroshana");
c2[1] = new customer("Sithara", "997942371V", "Bandarawela", 705924955,"usersithara", "passwordsithara");
c2[0]->Reg(o[0]); 
c2[0]->printdetails();
c2[1]->printdetails();*/

	// regCustomer r1;
	// r1.printdetails();
	/*
	====================================================================================================================*//*
 payment *p2 = new payment("BOC_bank",188235543,552,"kevin",1111,200000.00,o[0]);  */
	/**/

	//=========================================================//=============================================================

	return 0;
}
