#include "tntlop.hpp"
int main() {
	TNTLog log;
	log.SetLevel(log.LogLevelError);
	log.Warn("Hello!");
	log.Error("This is an error message.");
	log.Info("This is an info message.");
	return 0;
}