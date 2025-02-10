#pragma once
// IWYU pragma private; include "Firebase/Platform/Default/SystemClock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Platform/zzzz__IClockService_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemClock)
namespace Firebase::Platform {
class IClockService;
}
// Forward declare root types
namespace Firebase::Platform::Default {
class SystemClock;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::Default::SystemClock);
// Dependencies Firebase.Platform.IClockService, System.Object
namespace Firebase::Platform::Default {
// Is value type: false
// CS Name: Firebase.Platform.Default.SystemClock
class CORDL_TYPE SystemClock : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Firebase::Platform::IClockService*  Instance;

/// @brief Convert operator to "::Firebase::Platform::IClockService"
constexpr operator  ::Firebase::Platform::IClockService*() noexcept;

static inline ::Firebase::Platform::Default::SystemClock* New_ctor() ;

/// @brief Method .ctor, addr 0x1921c10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Platform::IClockService* getStaticF_Instance() ;

/// @brief Convert to "::Firebase::Platform::IClockService"
constexpr ::Firebase::Platform::IClockService* i___Firebase__Platform__IClockService() noexcept;

static inline void setStaticF_Instance(::Firebase::Platform::IClockService*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemClock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemClock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemClock(SystemClock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemClock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemClock(SystemClock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12196};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Platform::Default::SystemClock, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Platform::Default
NEED_NO_BOX(::Firebase::Platform::Default::SystemClock);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::Default::SystemClock*, "Firebase.Platform.Default", "SystemClock");
