#pragma once
// IWYU pragma private; include "Firebase/Platform/Services.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Services)
namespace Firebase::Platform {
class IAppConfigExtensions;
}
namespace Firebase::Platform {
class IClockService;
}
namespace Firebase::Platform {
class ILoggingService;
}
// Forward declare root types
namespace Firebase::Platform {
class Services;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::Services);
// Dependencies System.Object
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.Services
class CORDL_TYPE Services : public ::System::Object {
public:
// Declarations
/// @brief Field <AppConfig>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__AppConfig_k__BackingField, put=setStaticF__AppConfig_k__BackingField)) ::Firebase::Platform::IAppConfigExtensions*  _AppConfig_k__BackingField;

/// @brief Field <Clock>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Clock_k__BackingField, put=setStaticF__Clock_k__BackingField)) ::Firebase::Platform::IClockService*  _Clock_k__BackingField;

/// @brief Field <Logging>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Logging_k__BackingField, put=setStaticF__Logging_k__BackingField)) ::Firebase::Platform::ILoggingService*  _Logging_k__BackingField;

static inline ::Firebase::Platform::IAppConfigExtensions* getStaticF__AppConfig_k__BackingField() ;

static inline ::Firebase::Platform::IClockService* getStaticF__Clock_k__BackingField() ;

static inline ::Firebase::Platform::ILoggingService* getStaticF__Logging_k__BackingField() ;

static inline void setStaticF__AppConfig_k__BackingField(::Firebase::Platform::IAppConfigExtensions*  value) ;

static inline void setStaticF__Clock_k__BackingField(::Firebase::Platform::IClockService*  value) ;

static inline void setStaticF__Logging_k__BackingField(::Firebase::Platform::ILoggingService*  value) ;

/// @brief Method set_AppConfig, addr 0x192251c, size 0x5c, virtual false, abstract: false, final false
static inline void set_AppConfig(::Firebase::Platform::IAppConfigExtensions*  value) ;

/// @brief Method set_Clock, addr 0x1922578, size 0x5c, virtual false, abstract: false, final false
static inline void set_Clock(::Firebase::Platform::IClockService*  value) ;

/// @brief Method set_Logging, addr 0x19225d4, size 0x5c, virtual false, abstract: false, final false
static inline void set_Logging(::Firebase::Platform::ILoggingService*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Services() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Services", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Services(Services && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Services", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Services(Services const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12202};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Platform::Services, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::Services);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::Services*, "Firebase.Platform", "Services");
