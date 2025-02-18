class Button_State {
	public:
		bool is_down;
		bool changed;
	};
	
	
	enum {
		BUTTON_UP,
		BUTTON_DOWN,
		BUTTON_W,
		BUTTON_S,
	
		BUTTON_COUNT, //Should be the last time
	};
	
	class Input {
	public:
		Button_State buttons[BUTTON_COUNT];
	};