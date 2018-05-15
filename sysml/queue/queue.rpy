I-Logix-RPY-Archive version 8.5.2 Modeler C++ 1159120
{ IProject 
	- _id = GUID 43c22564-5ee8-4a11-8b2b-137e73011803;
	- _myState = 8192;
	- _name = "queue";
	- _objectCreation = "1333031554201891752851";
	- _umlDependencyID = "2037";
	- _lastID = 1;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "Default.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "Default";
		- _id = GUID 0d255c40-acbe-4325-96da-7a9941a7c756;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "DefaultComponent.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "DefaultComponent";
		- _id = GUID b6a2c8f6-d62e-46a1-beb9-c6731dd35cc8;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = 15;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 3;
		- value = 
		{ ISubsystem 
			- fileName = "Default";
			- _id = GUID 0d255c40-acbe-4325-96da-7a9941a7c756;
		}
		{ ISubsystem 
			- fileName = "SubsystemsPkg";
			- _id = GUID ac53ca5d-a261-4358-9038-bbaa2cec244e;
		}
		{ ISubsystem 
			- fileName = "libc";
			- _id = GUID ba31d893-40ef-47b8-b289-ce97697bd8ea;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 0;
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "DefaultComponent";
			- _id = GUID b6a2c8f6-d62e-46a1-beb9-c6731dd35cc8;
		}
	}
}

