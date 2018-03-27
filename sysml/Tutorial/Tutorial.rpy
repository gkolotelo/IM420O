I-Logix-RPY-Archive version 8.5.2 Modeler C++ 1159120
{ IProject 
	- _id = GUID 494a2971-785e-453b-a4ad-556c91b6651c;
	- _myState = 8192;
	- _name = "Tutorial";
	- _objectCreation = "32248572745201814644332";
	- _umlDependencyID = "2398";
	- _lastID = 3;
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
		- _id = GUID c96e4172-6bcb-4fac-9e47-5026b6d99fca;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "DefaultComponent.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "DefaultComponent";
		- _id = GUID 80a51932-51e8-46fc-81c6-f265d90f4ce2;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = 20;
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
			- _id = GUID c96e4172-6bcb-4fac-9e47-5026b6d99fca;
		}
		{ ISubsystem 
			- fileName = "ArchitecturePkg";
			- _id = GUID f7529d04-5f9c-4c4d-a80c-45db2137434d;
		}
		{ ISubsystem 
			- fileName = "SubsystemsPkg";
			- _id = GUID 7387ef50-a2a9-4f12-99d0-ac4915958c51;
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
			- _id = GUID 80a51932-51e8-46fc-81c6-f265d90f4ce2;
		}
	}
}

