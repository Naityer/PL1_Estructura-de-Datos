.PHONY: clean All

All:
	@echo "----------Building project:[ GestionPaqueteriaAmazon - Debug ]----------"
	@cd "PL1_EEDD_GestionAmazon_2023_24" && "$(MAKE)" -f  "GestionPaqueteriaAmazon.mk"
clean:
	@echo "----------Cleaning project:[ GestionPaqueteriaAmazon - Debug ]----------"
	@cd "PL1_EEDD_GestionAmazon_2023_24" && "$(MAKE)" -f  "GestionPaqueteriaAmazon.mk" clean
