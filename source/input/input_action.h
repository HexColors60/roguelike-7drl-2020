#ifndef INPUT_ACTION_H
#define INPUT_ACTION_H

enum input_game_action {
	INPUT_GAME_ACTION_NONE,

	/* Actions */
	INPUT_GAME_ACTION_MOVE_NORTH,
	INPUT_GAME_ACTION_MOVE_EAST,
	INPUT_GAME_ACTION_MOVE_SOUTH,
	INPUT_GAME_ACTION_MOVE_WEST,
	INPUT_GAME_ACTION_REST
};

enum input_ui_action {
	INPUT_UI_ACTION_NONE,

	/* Actions */
	INPUT_UI_ACTION_UP,
	INPUT_UI_ACTION_LEFT,
	INPUT_UI_ACTION_DOWN,
	INPUT_UI_ACTION_RIGHT,
	INPUT_UI_ACTION_SUBMIT
};

enum input_system_action {
	INPUT_SYSTEM_ACTION_NONE,

	/* Actions */
	INPUT_SYSTEM_ACTION_QUIT
};

#endif