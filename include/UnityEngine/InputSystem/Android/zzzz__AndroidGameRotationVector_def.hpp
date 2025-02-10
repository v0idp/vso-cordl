#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidGameRotationVector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__AttitudeSensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidGameRotationVector)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGameRotationVector;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidGameRotationVector);
// Dependencies UnityEngine.InputSystem.AttitudeSensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidGameRotationVector
class CORDL_TYPE AndroidGameRotationVector : public ::UnityEngine::InputSystem::AttitudeSensor {
public:
// Declarations
static inline ::UnityEngine::InputSystem::Android::AndroidGameRotationVector* New_ctor() ;

/// @brief Method .ctor, addr 0x2e688f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidGameRotationVector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidGameRotationVector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidGameRotationVector(AndroidGameRotationVector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGameRotationVector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidGameRotationVector(AndroidGameRotationVector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5050};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidGameRotationVector, 0x190>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGameRotationVector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGameRotationVector*, "UnityEngine.InputSystem.Android", "AndroidGameRotationVector");
