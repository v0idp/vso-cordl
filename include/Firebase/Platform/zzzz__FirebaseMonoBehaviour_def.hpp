#pragma once
// IWYU pragma private; include "Firebase/Platform/FirebaseMonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FirebaseMonoBehaviour)
namespace Firebase::Platform {
class FirebaseHandler;
}
// Forward declare root types
namespace Firebase::Platform {
class FirebaseMonoBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::FirebaseMonoBehaviour);
// Dependencies UnityEngine.MonoBehaviour
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.FirebaseMonoBehaviour
class CORDL_TYPE FirebaseMonoBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method GetFirebaseHandlerOrDestroyGameObject, addr 0x1920764, size 0xd8, virtual false, abstract: false, final false
inline ::Firebase::Platform::FirebaseHandler* GetFirebaseHandlerOrDestroyGameObject() ;

static inline ::Firebase::Platform::FirebaseMonoBehaviour* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x19208c4, size 0x24, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  hasFocus) ;

/// @brief Method OnDestroy, addr 0x19208e8, size 0x54, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x192083c, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1920840, size 0x7c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x192075c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseMonoBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseMonoBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseMonoBehaviour(FirebaseMonoBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseMonoBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseMonoBehaviour(FirebaseMonoBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12182};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Platform::FirebaseMonoBehaviour, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::FirebaseMonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::FirebaseMonoBehaviour*, "Firebase.Platform", "FirebaseMonoBehaviour");
