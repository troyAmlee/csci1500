.PHONY: clean All

All:
	@echo "----------Building project:[ csci1500 - Debug ]----------"
	@"$(MAKE)" -f  "csci1500.mk"
clean:
	@echo "----------Cleaning project:[ csci1500 - Debug ]----------"
	@"$(MAKE)" -f  "csci1500.mk" clean
