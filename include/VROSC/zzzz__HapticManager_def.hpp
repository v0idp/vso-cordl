#pragma once
// IWYU pragma private; include "VROSC/HapticManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HapticManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
struct HapticRequest;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class HapticManager;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::HapticManager);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HapticManager
class CORDL_TYPE HapticManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _hapticMetronomeIsActive, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__hapticMetronomeIsActive, put=__cordl_internal_set__hapticMetronomeIsActive)) bool  _hapticMetronomeIsActive;

/// @brief Field _hapticRequests, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__hapticRequests, put=__cordl_internal_set__hapticRequests)) ::System::Collections::Generic::List_1<::VROSC::HapticRequest>*  _hapticRequests;

/// @brief Field _hapticsDisabled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__hapticsDisabled, put=__cordl_internal_set__hapticsDisabled)) bool  _hapticsDisabled;

/// @brief Method Awake, addr 0x188a0f4, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ExecuteHapticsRequests, addr 0x188a404, size 0x244, virtual false, abstract: false, final false
inline void ExecuteHapticsRequests() ;

static inline ::VROSC::HapticManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x188a1ec, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RequestHapticFeedback, addr 0x1889fbc, size 0x130, virtual false, abstract: false, final false
inline void RequestHapticFeedback(::VROSC::HapticRequest  hapticRequest) ;

/// @brief Method SetHapticMetronomeIsActive, addr 0x188a38c, size 0xc, virtual false, abstract: false, final false
inline void SetHapticMetronomeIsActive(bool  active) ;

/// @brief Method SetHapticsDisabled, addr 0x188a314, size 0x78, virtual false, abstract: false, final false
inline void SetHapticsDisabled(bool  state) ;

/// @brief Method Update, addr 0x188a398, size 0x6c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UserDataLoaded, addr 0x188a2e4, size 0x30, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr bool const& __cordl_internal_get__hapticMetronomeIsActive() const;

constexpr bool& __cordl_internal_get__hapticMetronomeIsActive() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::HapticRequest>* const& __cordl_internal_get__hapticRequests() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::HapticRequest>*& __cordl_internal_get__hapticRequests() ;

constexpr bool const& __cordl_internal_get__hapticsDisabled() const;

constexpr bool& __cordl_internal_get__hapticsDisabled() ;

constexpr void __cordl_internal_set__hapticMetronomeIsActive(bool  value) ;

constexpr void __cordl_internal_set__hapticRequests(::System::Collections::Generic::List_1<::VROSC::HapticRequest>*  value) ;

constexpr void __cordl_internal_set__hapticsDisabled(bool  value) ;

/// @brief Method .ctor, addr 0x188a648, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HapticManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HapticManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HapticManager(HapticManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HapticManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HapticManager(HapticManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{615};

/// @brief Field _hapticsDisabled, offset: 0x20, size: 0x1, def value: None
 bool  ____hapticsDisabled;

/// @brief Field _hapticMetronomeIsActive, offset: 0x21, size: 0x1, def value: None
 bool  ____hapticMetronomeIsActive;

/// @brief Field _hapticRequests, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::HapticRequest>*  ____hapticRequests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HapticManager, ____hapticsDisabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticManager, ____hapticMetronomeIsActive) == 0x21, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticManager, ____hapticRequests) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HapticManager, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::HapticManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HapticManager*, "VROSC", "HapticManager");
