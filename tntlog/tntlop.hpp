#pragma once
#include <iostream>

class TNTLog {
  public:
	enum Level : unsigned char { LevelError, LevelWarn, LevelInfo, LevelDebug, LevelTrace };

	TNTLog() : m_logLevel(LevelInfo) {}
	TNTLog(Level level) : m_logLevel(level) {}
	void SetLevel(Level level) { m_logLevel = level; }
	void Error(const std::string& message) const {
		if (m_logLevel >= LevelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}
	void Warn(const std::string& message) const {
		if (m_logLevel >= LevelWarn) {
			std::cout << "[WARN]: " << message << std::endl;
		}
	}
	void Info(const std::string& message) const {
		if (m_logLevel >= LevelInfo) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}
	void Debug(const std::string& message) const {
		if (m_logLevel >= LevelDebug) {
			std::cout << "[Debug]: " << message << std::endl;
		}
	}
	void Trace(const std::string& message) const {
		if (m_logLevel >= LevelTrace) {
			std::cout << "[Trace]: " << message << std::endl;
		}
	}

  private:
	Level m_logLevel;
};
