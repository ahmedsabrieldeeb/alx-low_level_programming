# flags for make command
MAKEFLAGS += -s

# compiler arguments
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89

# basic source files and headers
SRC = search_algos.h

# linear search build
SRC_LINEAR = 0-linear.c 0-main.c
TARGET_LINEAR = 0-linear

# binary search build
SRC_BINARY = 0-binary.c 1-main.c
TARGET_BINARY = 1-binary

# phony my targets to avoid naming conflicts
.PHONY: all linear binary clean

# GUI for building (main menu)
all:
	@valid_choice=""
	@while [ -z "$$valid_choice" ]; do \
		echo "\nAvailable targets:\n"; \
		echo "1. linear"; \
		echo "2. binary"; \
		echo "3. clean"; \
		echo "4. Exit"; \
		echo ""; \
		read -p "Enter the target to build: " choice; \
		case $$choice in \
			1) $(MAKE) 0-linear ;; \
			2) $(MAKE) 1-binary ;; \
			3) $(MAKE) clean ;; \
			4) echo "Bye Bye..."; exit ;; \
			*) echo "\n!! Invalid choice !!\n";; \
		esac; \
	done

##
# building
##
linear:
$(TARGET_LINEAR): $(SRC_LINEAR)
	$(CC) $(CFLAGS) $(SRC) $(SRC_LINEAR) -o $(TARGET_LINEAR)

binary:
$(TARGET_BINARY): $(SRC_BINARY)
	$(CC) $(CFLAGS) $(SRC) $(SRC_BINARY) -o $(TARGET_BINARY)

# GUI for cleaning
clean:
	@valid_choice=""
	@while [ -z "$$valid_choice" ]; do \
		echo "\nClean Options:"; \
		echo "1. Clean all targets"; \
		echo "2. Clean specific target"; \
		echo "3. Back"; \
		echo ""; \
		read -p "Enter your choice: " choice; \
		case $$choice in \
			1) \
				rm -f $(TARGET_LINEAR) $(TARGET_BINARY);; \
			2) \
				valid_specific_choice=""; \
				while [ -z "$$valid_specific_choice" ]; do \
					echo "\nChoose the target to clean:"; \
					echo "1. 0-linear"; \
					echo "2. 1-binary"; \
					echo "3. Back"; \
					echo ""; \
					read -p "Enter your choice: " specific_choice; \
					case $$specific_choice in \
						1) rm -f $(TARGET_LINEAR) ;; \
						2) rm -f $(TARGET_BINARY) ;; \
						3) valid_specific_choice="yes" ;; \
						*) echo "\n!! Invalid choice !!";; \
					esac; \
				done \
				;; \
			3) valid_choice="yes" ;; \
			*) echo "\n!! Invalid choice !!\n";; \
		esac; \
	done
