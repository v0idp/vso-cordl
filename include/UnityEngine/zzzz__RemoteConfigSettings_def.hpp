#pragma once
// IWYU pragma private; include "UnityEngine/RemoteConfigSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RemoteConfigSettings)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine {
class RemoteConfigSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RemoteConfigSettings);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RemoteConfigSettings
class CORDL_TYPE RemoteConfigSettings : public ::System::Object {
public:
// Declarations
/// @brief Field Updated, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Updated, put=__cordl_internal_set_Updated)) ::System::Action_1<bool>*  Updated;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Method RemoteConfigSettingsUpdated, addr 0x3190b78, size 0x34, virtual false, abstract: false, final false
static inline void RemoteConfigSettingsUpdated(::UnityEngine::RemoteConfigSettings*  rcs, bool  wasLastUpdatedFromServer) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_Updated() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_Updated() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_Updated(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteConfigSettings(RemoteConfigSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteConfigSettings(RemoteConfigSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12379};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// @brief Field Updated, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___Updated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RemoteConfigSettings, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RemoteConfigSettings, ___Updated) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RemoteConfigSettings, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::RemoteConfigSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteConfigSettings*, "UnityEngine", "RemoteConfigSettings");
