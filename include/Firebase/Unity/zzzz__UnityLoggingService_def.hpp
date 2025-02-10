#pragma once
// IWYU pragma private; include "Firebase/Unity/UnityLoggingService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Platform/zzzz__ILoggingService_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityLoggingService)
// Forward declare root types
namespace Firebase::Unity {
class UnityLoggingService;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Unity::UnityLoggingService);
// Dependencies Firebase.Platform.ILoggingService, System.Object
namespace Firebase::Unity {
// Is value type: false
// CS Name: Firebase.Unity.UnityLoggingService
class CORDL_TYPE UnityLoggingService : public ::System::Object {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Firebase::Unity::UnityLoggingService*  _instance;

/// @brief Convert operator to "::Firebase::Platform::ILoggingService"
constexpr operator  ::Firebase::Platform::ILoggingService*() noexcept;

static inline ::Firebase::Unity::UnityLoggingService* New_ctor() ;

/// @brief Method .ctor, addr 0x1920e1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Unity::UnityLoggingService* getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x1920e24, size 0x58, virtual false, abstract: false, final false
static inline ::Firebase::Unity::UnityLoggingService* get_Instance() ;

/// @brief Convert to "::Firebase::Platform::ILoggingService"
constexpr ::Firebase::Platform::ILoggingService* i___Firebase__Platform__ILoggingService() noexcept;

static inline void setStaticF__instance(::Firebase::Unity::UnityLoggingService*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLoggingService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLoggingService", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLoggingService(UnityLoggingService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLoggingService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLoggingService(UnityLoggingService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12185};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Unity::UnityLoggingService, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Unity
NEED_NO_BOX(::Firebase::Unity::UnityLoggingService);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnityLoggingService*, "Firebase.Unity", "UnityLoggingService");
