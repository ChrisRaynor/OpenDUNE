/** @file src/audio/midi_none.c In case no MIDI is selected, create an empty
 *  one, which ignores all input */

#include "types.h"
#include "midi.h"

bool midi_init(void)
{
	return false;
}

void midi_uninit(void)
{
 // test

}

void midi_send(uint32 data)
{
	VARIABLE_NOT_USED(data);
}

uint16 midi_send_string(const uint8 * data, uint16 len)
{
	VARIABLE_NOT_USED(data);

	return len;
}

void midi_reset(void)
{
}
