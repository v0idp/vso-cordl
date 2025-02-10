#pragma once
// IWYU pragma private; include "Unity/Services/Core/Device/AndroidUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidUtils)
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Unity::Services::Core::Device {
class AndroidUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Device::AndroidUtils);
// Dependencies System.Object
namespace Unity::Services::Core::Device {
// Is value type: false
// CS Name: Unity.Services.Core.Device.AndroidUtils
class CORDL_TYPE AndroidUtils : public ::System::Object {
public:
// Declarations
/// @brief Method GetSharedPreferences, addr 0x2e9cbc8, size 0x134, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* GetSharedPreferences(::UnityEngine::AndroidJavaObject*  context, ::StringW  name, int32_t  mode) ;

/// @brief Method GetSharedPreferences, addr 0x2e9ccfc, size 0x17c, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* GetSharedPreferences(::StringW  name, int32_t  mode) ;

/// @brief Method GetUnityActivity, addr 0x2e9c9e8, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* GetUnityActivity() ;

/// @brief Method SharedPreferencesGetString, addr 0x2e9ce78, size 0x188, virtual false, abstract: false, final false
static inline ::StringW SharedPreferencesGetString(::StringW  name, ::StringW  key, ::StringW  defValue) ;

/// @brief Method SharedPreferencesGetString, addr 0x2e9d000, size 0x224, virtual false, abstract: false, final false
static inline ::StringW SharedPreferencesGetString(::UnityEngine::AndroidJavaObject*  preferences, ::StringW  key, ::StringW  defValue) ;

/// @brief Method SharedPreferencesPutString, addr 0x2e9d224, size 0x178, virtual false, abstract: false, final false
static inline void SharedPreferencesPutString(::StringW  name, ::StringW  key, ::StringW  value) ;

/// @brief Method SharedPreferencesPutString, addr 0x2e9d39c, size 0x238, virtual false, abstract: false, final false
static inline void SharedPreferencesPutString(::UnityEngine::AndroidJavaObject*  preferences, ::StringW  key, ::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidUtils(AndroidUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidUtils(AndroidUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12501};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Device::AndroidUtils, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Device
NEED_NO_BOX(::Unity::Services::Core::Device::AndroidUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Device::AndroidUtils*, "Unity.Services.Core.Device", "AndroidUtils");
