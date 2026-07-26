#include <iostream>

class TNTLog {
  public:
	enum Level { LevelError, LevelWarning, LevelInfo };
	void SetLevel(Level level) { m_logLevel = level; }
	void Error(const std::string& message) const {
		if (m_logLevel >= LevelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}
	void Warn(const std::string& message) const {
		if (m_logLevel >= LevelWarning) {
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}
	void Info(const std::string& message) const {
		if (m_logLevel >= LevelInfo) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}

  private:
	Level m_logLevel = LevelInfo;
};
