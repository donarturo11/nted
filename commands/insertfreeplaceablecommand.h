/****************************************************************************************/
/*											*/
/* This program is free software; you can redistribute it and/or modify it under the	*/
/* terms of the GNU General Public License as published by the Free Software		*/
/* Foundation; either version 2 of the License, or (at your option) any later version.	*/
/*											*/
/* This program is distributed in the hope that it will be useful, but WITHOUT ANY	*/
/* WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A	*/
/* PARTICULAR PURPOSE. See the GNU General Public License for more details.		*/
/*											*/
/* You should have received a copy of the GNU General Public License along with this	*/
/* program; (See "COPYING"). If not, If not, see <http://www.gnu.org/licenses/>.        */
/*											*/
/*--------------------------------------------------------------------------------------*/
/*											*/
/*  Copyright   Joerg Anders, TU Chemnitz, Fakultaet fuer Informatik, GERMANY           */
/*		ja@informatik.tu-chemnitz.de						*/
/*											*/
/*											*/
/****************************************************************************************/

#ifndef INSERT_FREE_REPLACEABLE_H

#define  INSERT_FREE_REPLACEABLE_H
#include "config.h"
#include "command.h"
#include <gtk/gtk.h>

class NedFreeReplaceable;
class NedChordOrRest;


class NedInsertFreePlaceableCommand : public NedCommand {
	public:	
		NedInsertFreePlaceableCommand(NedFreeReplaceable *freereplaceable, NedChordOrRest *chord_or_rest, double x, double y);
		virtual void execute(bool adjust = false);
		virtual void unexecute(bool adjust = false);
	private:
		NedFreeReplaceable *m_freereplaceable;
		NedChordOrRest *m_chord_or_rest;
		double m_x, m_y;
};

#endif /* INSERT_FREE_REPLACEABLE_H */
