/*
	grive: an GPL program to sync a local directory with Google Drive
	Copyright (C) 2012  Wan Wai Ho

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation version 2
	of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#pragma once

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace grut {

class ResourceTreeTest : public CppUnit::TestFixture
{
public :
	ResourceTreeTest( ) ;

	// declare suit function
	CPPUNIT_TEST_SUITE( ResourceTreeTest ) ;
		CPPUNIT_TEST( TestSerialize ) ;
	CPPUNIT_TEST_SUITE_END();

private :
	void TestSerialize( ) ;
} ;

} // end of namespace
