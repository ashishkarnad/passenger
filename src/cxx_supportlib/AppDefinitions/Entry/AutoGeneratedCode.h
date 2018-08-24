/*
 *  Phusion Passenger - https://www.phusionpassenger.com/
 *  Copyright (c) 2018 Phusion Holding B.V.
 *
 *  "Passenger", "Phusion Passenger" and "Union Station" are registered
 *  trademarks of Phusion Holding B.V.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 */

/*
 * AppDefinitions/Entry/AutoGeneratedCode.h is automatically generated from
 * AppDefinitions/Entry/AutoGeneratedCode.h.cxxcodebuilder by the build system.
 * It uses the comment hints from AppDefinitions/Entry.h.
 *
 * To force regenerating this file:
 *   rm -f src/cxx_supportlib/AppDefinitions/Entry/AutoGeneratedCode.h
 *   rake src/cxx_supportlib/AppDefinitions/Entry/AutoGeneratedCode.h
 */

inline void
Passenger::AppDefinitions::Entry::internStrings() {
	size_t totalSize = 0;
	size_t tmpSize;
	char *newStorage, *pos, *end;

	/*
	 * Calculated required storage size
	 */
	totalSize += key.size() + 1;
	totalSize += location.size() + 1;
	totalSize += type.size() + 1;
	totalSize += startupFile.size() + 1;
	totalSize += startCommand.size() + 1;
	totalSize += appEnv.size() + 1;
	totalSize += baseURI.size() + 1;
	totalSize += logFile.size() + 1;
	totalSize += user.size() + 1;
	totalSize += group.size() + 1;
	totalSize += ruby.size() + 1;
	totalSize += python.size() + 1;
	totalSize += nodejs.size() + 1;
	totalSize += meteorAppSettings.size() + 1;
	totalSize += spawnMethod.size() + 1;
	totalSize += restartDir.size() + 1;
	totalSize += stickySessionsCookieName.size() + 1;
	{
		StringKeyTable<StaticString>::ConstIterator it(environmentVariables);
		while (*it != NULL) {
			totalSize += it.getValue().size() + 1;
			it.next();
		}
	}
	{
		boost::container::vector<StaticString>::const_iterator it, end = monitorLogFiles.end();
		for (it = monitorLogFiles.begin(); it != end; it++) {
			totalSize += it->size() + 1;
			it.next();
		}
	}

	/*
	 * Allocate new storage
	 */
	newStorage = pos = new char[totalSize];
	end = newStorage + totalSize;

	/*
	 * Fill new storage
	 */
	pos = appendData(pos, end, key);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, location);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, type);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, startupFile);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, startCommand);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, appEnv);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, baseURI);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, logFile);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, user);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, group);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, ruby);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, python);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, nodejs);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, meteorAppSettings);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, spawnMethod);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, restartDir);
	pos = appendData(pos, end, "\0", 1);
	pos = appendData(pos, end, stickySessionsCookieName);
	pos = appendData(pos, end, "\0", 1);
	{
		StringKeyTable<StaticString>::Iterator it(environmentVariables);
		while (*it != NULL) {
			pos = appendData(pos, end, it.getValue());
			pos = appendData(pos, end, "\0", 1);
			it.next();
		}
	}
	{
		boost::container::vector<StaticString>::const_iterator it, end = monitorLogFiles.end();
		for (it = monitorLogFiles.begin(); it != end; it++) {
			pos = appendData(pos, end, *it);
			pos = appendData(pos, end, "\0", 1);
			it.next();
		}
	}

	/*
	 * Move over pointers to new storage
	 */
	pos = newStorage;
	tmpSize = key.size();
	key = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = location.size();
	location = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = type.size();
	type = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = startupFile.size();
	startupFile = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = startCommand.size();
	startCommand = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = appEnv.size();
	appEnv = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = baseURI.size();
	baseURI = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = logFile.size();
	logFile = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = user.size();
	user = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = group.size();
	group = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = ruby.size();
	ruby = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = python.size();
	python = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = nodejs.size();
	nodejs = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = meteorAppSettings.size();
	meteorAppSettings = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = spawnMethod.size();
	spawnMethod = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = restartDir.size();
	restartDir = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	tmpSize = stickySessionsCookieName.size();
	stickySessionsCookieName = StaticString(pos, tmpSize);
	pos += tmpSize + 1;

	{
		StringKeyTable<StaticString>::Iterator it(environmentVariables);
		while (*it != NULL) {
			tmpSize = it.getValue().size();
			it.getValue() = StaticString(pos, tmpSize);
			pos += tmpSize + 1;
			it.next();
		}
	}

	{
		boost::container::vector<StaticString>::iterator it, end = monitorLogFiles.end();
		for (it = monitorLogFiles.begin(); it != end; it++) {
			tmpSize = it->size();
			*it = StaticString(pos, tmpSize);
			pos += tmpSize + 1;
			it.next();
		}
	}


	/*
	 * Commit current storage
	 */
	storage.reset(newStorage);
}

