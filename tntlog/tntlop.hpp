#include <iostream>

class TNTLog {
  public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
	void SetLevel(int level) { m_logLevel = level; }
	void Error(const std::string& message) const {
		if (m_logLevel >= LogLevelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}
	void Warn(const std::string& message) const {
		if (m_logLevel >= LogLevelWarning) {
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}
	void Info(const std::string& message) const {
		if (m_logLevel >= LogLevelInfo) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}

  private:
	int m_logLevel = LogLevelInfo;
};
