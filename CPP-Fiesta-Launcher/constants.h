#pragma once

#include <string>

namespace Constants
{
	static const int NUMBER_OF_UPDATE_SERVERS = 1;
	static const int LAUNCHER_VERSION = 102;
	static const std::wstring LAUNCHER_VERSION_STRING = L"1.02";

	static const std::wstring GAME_EXECUTABLE_NAME = L"Fiesta.exe";
	static const std::wstring GAME_LAUNCHER_FILE_NAME = L"CrystalFiesta.exe";

	static const int FILE_BUFFER_SIZE = 64 * 1024;
	static const std::string UPDATE_DOMAIN = ".crystalfiesta.com";
	static const std::string UPDATE_DIRECTORY = "/patch";

	static const std::wstring VERSION_FILE = L"\\Crystal.ini";
	static const std::wstring UNINSTALL_FILE = L"\\unins.ini"; // a file to write list of installed game files in, for the uninstaller

	static const std::string REMOTE_NEWS_FILE = "/news.txt";
	static const std::string REMOTE_NEWS_SIGNATURE_FILE = "/news.sig";

	static const std::string REMOTE_VERSION_FILE = "/latest.txt";
	static const std::string REMOTE_VERSION_SIGNATURE_FILE = "/latest.sig";
	static const std::string REMOTE_CHECKSUMS_FILE = "/checksums.txt";
	static const std::string REMOTE_CHECKSUMS_SIGNATURE_FILE = "/checksums.sig";
	static const std::string REMOTE_LAUNCHER_EXECUTABLE_FILE = "/latest_launcher.exe";

	static const std::string MAIN_PUBLIC_KEY =
		"-----BEGIN PUBLIC KEY-----\n"\
		"MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAxks4D81ce0GMNix3URev\n"\
		"xfExNCF7OfC5CuHnNM3LXySaoZa51eZFIm6eMJGjxvJDOCU/7Ms0yFz5l6dKrgsT\n"\
		"uKrrGdsf2U7FRtROdgO2PdX84mKS6So6o3wmlQrotl18EfeLvEec83nuEty7whxF\n"\
		"+ddatuk8MkWs01Xb1HoSuDNYftPlKgb1dbs+hlnm9kdJT/pNrGOa04+dnUgXe4oX\n"\
		"U+vC66Bj5TMlEOzEuVVaqvZhMv9kCQYsJEeFbtIWGAFbDgCygGHF3PimuC9XxE+1\n"\
		"XOpN9D8y9manSANpu88yQ9pGrhuzfYs63uC8ufglRX77RwykZP/WGt5RW9DYPXF+\n"\
		"xwIDAQAB\n"\
		"-----END PUBLIC KEY-----\n";
	static const std::string AUXILIARY_PUBLIC_KEY =
		"-----BEGIN PUBLIC KEY-----\n"\
		"MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAxks4D81ce0GMNix3URev\n"\
		"xfExNCF7OfC5CuHnNM3LXySaoZa51eZFIm6eMJGjxvJDOCU/7Ms0yFz5l6dKrgsT\n"\
		"uKrrGdsf2U7FRtROdgO2PdX84mKS6So6o3wmlQrotl18EfeLvEec83nuEty7whxF\n"\
		"+ddatuk8MkWs01Xb1HoSuDNYftPlKgb1dbs+hlnm9kdJT/pNrGOa04+dnUgXe4oX\n"\
		"U+vC66Bj5TMlEOzEuVVaqvZhMv9kCQYsJEeFbtIWGAFbDgCygGHF3PimuC9XxE+1\n"\
		"XOpN9D8y9manSANpu88yQ9pGrhuzfYs63uC8ufglRX77RwykZP/WGt5RW9DYPXF+\n"\
		"xwIDAQAB\n"\
		"-----END PUBLIC KEY-----\n";

	static const std::wstring GUID = L"Launcher{910A5365-6AA9-4332-AC4B-65F133BD73A3}";

	static const int LINES_ON_ABOUT_SCREEN = 17;
	static const std::wstring ABOUT_TEXT =
		L"CrystalFiesta v" + LAUNCHER_VERSION_STRING + L"\n"\
		"Copyright (c) CrystalFiesta 2021\n"\
		"All rights reserved.\n"\
		"\n"\
		"--- Terms of Use ---\n"\
		"\n"\
		"THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"\
		"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"\
		"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL\n"\
		"THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"\
		"LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"\
		"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN\n"\
		"THE SOFTWARE.\n";
};