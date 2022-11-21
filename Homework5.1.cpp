#include<iostream>
using namespace std;
class A{
public:
	int aa;
protected:
	int ab;
private:
	int ac;
public: 
	void testA() {
		cout << "test A\n";
	}
	void setab(int ab) {
		this->ab = ab;
	}
	int getab() {
		return ab;
	}
	void setac(int ac) {
		this->ac = ac;
	}
	int getac() {
		return ac;
	}
};
class B:private A{
public:
int ba;
protected:
int bb;
private:
int bc;
public: 
	void testB() {
		cout << "test B\n";
	}
	void setbb(int bb) {
		this->bb = bb;
	}
	int getbb() {
		return bb;
	}
	void setbc(int bc) {
		this->bc = bc;
	}
	int getbc() {
		return bc;
	}
};
class C : private B{
public:
int ca;
protected:
int cb;
private:
int cc;
public: 
	void testC() {
		cout << "test C\n";
	}
	void setcb(int cb) {
		this->cb = cb;
	}
	int getcb() {
		return cb;
	}
	void setcc(int cc) {
		this->cc = cc;
	}
	int getcc() {
		return cc;
	}
};
int main() {
	A* testA;
	B* testB;
	C* testC;
	testA = new A();
	testB = new B();
	testC = new C();
	testA->testA();
	testB->testB();
	testB->testA();
	testC->testC();
	testC->testB();
	testC->testA();
	testA->aa = 52;
	testA->setab(42);
	testA->setac(32);
	testB->aa = 61;
	testB->setab(51);
	testB->setac(41);
	testB->ba = 31;
	testB->setbb(21);
	testB->setbc(11);
	testC->aa = 80;
	testC->setab(70);
	testC->setac(60);
	testC->ba=50;
	testC->setbb(40);
	testC->setbc(30);
	testC->ca = 20;
	testC->setcb(10);
	testC->setcc(0);
	cout << "Class A:" << testA->aa <<" "<< testA->getab()<<" "<<testA->getac() << endl;
	cout << "Class B:" << testB->aa << " " << testB->getab() << " " << testB->getac() << " " << testB->ba << " " << testB->getbb() << " " << testB->getbc() << endl;
	cout << "Class C:" << testC->aa << " " << testC->getab() << " " << testC->getac() << " " << testC->ba << " " << testC->getbb() << " " << testC->getbc() << " " << testC->ca << " " << testC->getcb() << " " << testC->getcc() << endl;
	return 0;
}
/*
class A
class B:public A
class C:public B
what it shows
test A
test B
test A
test C
test B
test A
Class A : 52 42 32
Class B : 61 51 41 31 21 11
Class C : 80 70 60 50 40 30 20 10 0
-------------------------------------------------------------------------------------------------------------------
class A
class B:protected A
class C:public B

doesn't show results

Error	C2248	'A::getac': cannot access protected member declared in class 'B'
Error	C2247	'A::getac' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2248	'A::getab': cannot access protected member declared in class 'B'
Error	C2247	'A::getab' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2248	'A::aa': cannot access protected member declared in class 'B'
Error	C2248	'A::getac': cannot access protected member declared in class 'B'
Error	C2248	'A::aa': cannot access protected member declared in class 'B'	
Error	C2248	'A::setac': cannot access protected member declared in class 'B'		
Error	C2248	'A::aa': cannot access protected member declared in class 'B'	
Error	C2248	'A::setab': cannot access protected member declared in class 'B'
Error	C2248	'A::setac': cannot access protected member declared in class 'B'
Error	C2247	'A::getac' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2248	'A::testA': cannot access protected member declared in class 'B'	
Error	C2248	'A::testA': cannot access protected member declared in class 'B'	

-------------------------------------------------------------------------------------------------------------------
class A
class B:private A
class C:public B

doesn't show results


Error	C2248	'A::getac': cannot access protected member declared in class 'B'	
Error	C2248	'A::getab': cannot access protected member declared in class 'B'	
Error	C2248	'A::getab': cannot access protected member declared in class 'B'	
Error	C2248	'A::getac': cannot access protected member declared in class 'B'	
Error	C2248	'A::aa': cannot access protected member declared in class 'B'	
Error	C2248	'A::aa': cannot access protected member declared in class 'B'	
Error	C2248	'A::setab': cannot access protected member declared in class 'B'
Error	C2248	'A::setac': cannot access protected member declared in class 'B'
Error	C2248	'A::aa': cannot access protected member declared in class 'B'
Error	C2247	'A::getac' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::aa' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::getab' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::getac' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2248	'A::testA': cannot access protected member declared in class 'B'
Error	C2248	'A::testA': cannot access protected member declared in class 'B'
Error	C2248	'A::aa': cannot access protected member declared in class 'B'
Error	C2248	'A::setab': cannot access protected member declared in class 'B'
Error	C2248	'A::setac': cannot access protected member declared in class 'B'


-------------------------------------------------------------------------------------------------------------------


class A
class B:public A
class C:protected B

doesn't show results

Error	C2248	'B::getbc': cannot access private member declared in class 'C'
Error	C2247	'B::getbc' not accessible because 'C' uses 'private' to inherit from 'B'	
Error	C2248	'B::getbb': cannot access private member declared in class 'C'		
Error	C2248	'B::getbb': cannot access private member declared in class 'C'	
Error	C2247	'B::getbb' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2248	'B::ba': cannot access private member declared in class 'C'
Error	C2247	'B::ba' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2248	'A::getac': cannot access private member declared in class 'C'	
Error	C2247	'A::getac' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2248	'A::getab': cannot access private member declared in class 'C'

-------------------------------------------------------------------------------------------------------------------
class A
class B:public A
class C:private B

doesn't show results

Error	C2248	'B::getbc': cannot access private member declared in class 'C'	
Error	C2247	'B::getbc' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2248	'B::getbb': cannot access private member declared in class 'C'	
Error	C2247	'B::getbb' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2248	'B::ba': cannot access private member declared in class 'C'	Lab5.1	
Error	C2247	'B::ba' not accessible because 'C' uses 'private' to inherit from 'B'	Lab5.1
Error	C2248	'A::getac': cannot access private member declared in class 'C'

-------------------------------------------------------------------------------------------------------------------
class A
class B:protected A
class C:protected B
 
doesn't show results

Error	C2248	'B::ba': cannot access private member declared in class 'C'
Error	C2247	'B::getbc' not accessible because 'C' uses 'private' to inherit from 'B'	
Error	C2248	'B::getbb': cannot access private member declared in class 'C'	
Error	C2247	'B::getbb' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2248	'B::ba': cannot access private member declared in class 'C'
Error	C2247	'B::ba' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2248	'A::getac': cannot access private member declared in class 'C'	
-------------------------------------------------------------------------------------------------------------------
class A
class B:protected A
class C:private B

doesn't show results

Error	C2248	'A::getab': cannot access protected member declared in class 'B'
Error	C2248	'A::getab': cannot access protected member declared in class 'B'
Error	C2248	'A::getac': cannot access protected member declared in class 'B'
Error	C2248	'A::aa': cannot access protected member declared in class 'B'
Error	C2248	'A::setab': cannot access protected member declared in class 'B'
Error	C2248	'A::setac': cannot access protected member declared in class 'B'
Error	C2248	'A::aa': cannot access protected member declared in class 'B'
Error	C2247	'A::getab' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::aa' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::getab' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::getac' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::aa' not accessible because 'B' uses 'protected' to inherit from 'A'
-------------------------------------------------------------------------------------------------------------------
class A
class B:private A
class C:protected B

doesn't show results
Error	C2248	'A::getac': cannot access protected member declared in class 'B'
Error	C2248	'A::getab': cannot access protected member declared in class 'B'
Error	C2248	'A::getab': cannot access protected member declared in class 'B'
Error	C2248	'A::getac': cannot access protected member declared in class 'B'
Error	C2248	'A::aa': cannot access protected member declared in class 'B'
Error	C2248	'A::setac': cannot access protected member declared in class 'B'
Error	C2248	'A::aa': cannot access protected member declared in class 'B'
Error	C2248	'A::aa': cannot access protected member declared in class 'B'
Error	C2248	'A::setab': cannot access protected member declared in class 'B'
Error	C2248	'A::setac': cannot access protected member declared in class 'B'
Error	C2248	'A::aa': cannot access protected member declared in class 'B'
Error	C2248	'A::setab': cannot access protected member declared in class 'B'
Error	C2247	'A::getab' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::getac' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2248	'A::testA': cannot access protected member declared in class 'B'
Error	C2248	'A::testA': cannot access protected member declared in class 'B'
Error	C2247	'A::setac' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::aa' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::getab' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::getac' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::aa' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::setab' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::aa' not accessible because 'B' uses 'protected' to inherit from 'A'
Error	C2247	'A::setac' not accessible because 'B' uses 'protected' to inherit from 'A'
-------------------------------------------------------------------------------------------------------------------
class A
class B:private A
class C:private B

doesn't show results

Error	C2248	'B::getbc': cannot access private member declared in class 'C'
Error	C2248	'A::aa': cannot access private member declared in class 'B'	
Error	C2248	'A::getab': cannot access private member declared in class 'B'	
Error	C2248	'A::getac': cannot access private member declared in class 'B'
Error	C2248	'A::aa': cannot access private member declared in class 'B'	
Error	C2248	'A::getab': cannot access private member declared in class 'B'
Error	C2248	'A::getac': cannot access private member declared in class 'B'
Error	C2248	'B::ba': cannot access private member declared in class 'C'
Error	C2248	'B::getbb': cannot access private member declared in class 'C'
Error	C2248	'A::setac': cannot access private member declared in class 'B'
Error	C2248	'A::aa': cannot access private member declared in class 'B'
Error	C2248	'A::setab': cannot access private member declared in class 'B'
Error	C2248	'A::setac': cannot access private member declared in class 'B'
Error	C2248	'B::ba': cannot access private member declared in class 'C'
Error	C2248	'B::setbb': cannot access private member declared in class 'C'
Error	C2248	'B::setbc': cannot access private member declared in class 'C'
Error	C2247	'A::getac' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'B::ba' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2247	'B::getbb' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2247	'B::getbc' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2248	'A::testA': cannot access private member declared in class 'B'	
Error	C2248	'B::testB': cannot access private member declared in class 'C'
Error	C2248	'A::testA': cannot access private member declared in class 'B'	
Error	C2248	'A::aa': cannot access private member declared in class 'B'
Error	C2248	'A::setab': cannot access private member declared in class 'B'	
Error	C2247	'A::aa' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'A::getab' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'B::setbb' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2247	'B::setbc' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2247	'A::aa' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'A::getab' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'A::getac' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'A::setac' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'A::aa' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'A::setab' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'A::setac' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'B::ba' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2247	'A::aa' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'A::setab' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'B::testB' not accessible because 'C' uses 'private' to inherit from 'B'
Error	C2247	'A::testA' not accessible because 'B' uses 'private' to inherit from 'A'
Error	C2247	'A::testA' not accessible because 'B' uses 'private' to inherit from 'A'
*/
