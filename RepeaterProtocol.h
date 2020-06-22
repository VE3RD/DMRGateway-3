/*
*   Copyright (C) 2017,2018 by Jonathan Naylor G4KLX
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software
*   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#if !defined(RepeaterProtocol_H)
#define	RepeaterProtocol_H

#include "DMRData.h"

#include <string>

class IRepeaterProtocol {
public:
	virtual ~IRepeaterProtocol() = 0;

	virtual std::string getOptions() const = 0;

	virtual unsigned int getConfig(unsigned char* config) const = 0;

	virtual unsigned int getId() const = 0;

	virtual bool open() = 0;

	virtual bool read(CDMRData& data) = 0;

	virtual bool write(const CDMRData& data) = 0;

	virtual bool readRadioPosition(unsigned char* data, unsigned int& length) = 0;

	virtual bool readTalkerAlias(unsigned char* data, unsigned int& length) = 0;

	virtual bool readHomePosition(unsigned char* data, unsigned int& length) = 0;

	virtual void clock(unsigned int ms) = 0;

	virtual bool writeBeacon() = 0;

	virtual void close() = 0;

private:
};

#endif
