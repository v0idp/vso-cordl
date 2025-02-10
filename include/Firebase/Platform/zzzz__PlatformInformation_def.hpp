#pragma once
// IWYU pragma private; include "Firebase/Platform/PlatformInformation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlatformInformation)
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Firebase::Platform {
class PlatformInformation;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::PlatformInformation);
// Dependencies System.Object
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.PlatformInformation
class CORDL_TYPE PlatformInformation : public ::System::Object {
public:
// Declarations
/// @brief Field <RealtimeSinceStartupSafe>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RealtimeSinceStartupSafe_k__BackingField, put=setStaticF__RealtimeSinceStartupSafe_k__BackingField)) float_t  _RealtimeSinceStartupSafe_k__BackingField;

/// @brief Field <>f__am$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache0, put=setStaticF___f__am$cache0)) ::System::Func_1<::StringW>*  __f__am$cache0;

/// @brief Field <>f__am$cache1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache1, put=setStaticF___f__am$cache1)) ::System::Func_1<::StringW>*  __f__am$cache1;

/// @brief Field runtimeVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_runtimeVersion, put=setStaticF_runtimeVersion)) ::StringW  runtimeVersion;

/// @brief Method <get_DefaultConfigLocation>m__0, addr 0x1920c6c, size 0x50, virtual false, abstract: false, final false
static inline ::StringW _get_DefaultConfigLocation_m__0() ;

/// @brief Method <get_RuntimeVersion>m__1, addr 0x1920cbc, size 0x50, virtual false, abstract: false, final false
static inline ::StringW _get_RuntimeVersion_m__1() ;

static inline float_t getStaticF__RealtimeSinceStartupSafe_k__BackingField() ;

static inline ::System::Func_1<::StringW>* getStaticF___f__am$cache0() ;

static inline ::System::Func_1<::StringW>* getStaticF___f__am$cache1() ;

static inline ::StringW getStaticF_runtimeVersion() ;

/// @brief Method get_DefaultConfigLocation, addr 0x19209f4, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW get_DefaultConfigLocation() ;

/// @brief Method get_IsAndroid, addr 0x192093c, size 0x5c, virtual false, abstract: false, final false
static inline bool get_IsAndroid() ;

/// @brief Method get_IsIOS, addr 0x1920998, size 0x5c, virtual false, abstract: false, final false
static inline bool get_IsIOS() ;

/// @brief Method get_RealtimeSinceStartup, addr 0x19208bc, size 0x8, virtual false, abstract: false, final false
static inline float_t get_RealtimeSinceStartup() ;

/// @brief Method get_RuntimeName, addr 0x1920b28, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_RuntimeName() ;

/// @brief Method get_RuntimeVersion, addr 0x1920b68, size 0x104, virtual false, abstract: false, final false
static inline ::StringW get_RuntimeVersion() ;

static inline void setStaticF__RealtimeSinceStartupSafe_k__BackingField(float_t  value) ;

static inline void setStaticF___f__am$cache0(::System::Func_1<::StringW>*  value) ;

static inline void setStaticF___f__am$cache1(::System::Func_1<::StringW>*  value) ;

static inline void setStaticF_runtimeVersion(::StringW  value) ;

/// @brief Method set_RealtimeSinceStartupSafe, addr 0x1920ad4, size 0x54, virtual false, abstract: false, final false
static inline void set_RealtimeSinceStartupSafe(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformInformation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformInformation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformInformation(PlatformInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInformation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformInformation(PlatformInformation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12183};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Platform::PlatformInformation, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::PlatformInformation);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::PlatformInformation*, "Firebase.Platform", "PlatformInformation");
