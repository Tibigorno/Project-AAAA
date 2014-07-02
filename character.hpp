/* README :
 * Everything that concern the playable character.
 * Do not mistake with npc.hpp (non-playble character)
 */

class Character
{

	private:
	
	/*Stats*/
	int max_hp, max_mp, max_sp;         //Health, magic and stamina points.
	int hp, mp, sp;                     //Current points.
	int strength, knowledge, dexterity; //Offenvive stats.
	int vitality, wisdom, agility;      //Defenvive stats.
	
	/*Stuff*/	/*
	Weapon weapon_left, weapon_right;
	Helmet helmet;
	Chest chest;
	Leg leg;
	Shoe shoe;
	*/
	
	/*Physic information*/   /*
	Vect position, velocity, acceleration;
	double weight, height;
	
	*/
	
	public:
	
	/*Animation plateform view*/
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
	bool isInPlateformViewArea();
	
	/*Animation sky view*/
	void moveEast();
	void moveWest();
	void moveNorth();
	void moveSouth();
	bool isInSkyViewArea();
	
	

};
