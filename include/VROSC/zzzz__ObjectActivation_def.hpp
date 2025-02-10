#pragma once
// IWYU pragma private; include "VROSC/ObjectActivation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObjectActivation)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace VROSC {
class ObjectActivation;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ObjectActivation);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ObjectActivation
class CORDL_TYPE ObjectActivation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_GameObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  GameObjects;

/// @brief Field _gameObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameObjects, put=__cordl_internal_set__gameObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _gameObjects;

/// @brief Method ActivateByPercentage, addr 0x176ca34, size 0x12c, virtual false, abstract: false, final false
inline void ActivateByPercentage(float_t  percentage) ;

static inline ::VROSC::ObjectActivation* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__gameObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__gameObjects() ;

constexpr void __cordl_internal_set__gameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x1770e10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GameObjects, addr 0x1770e08, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_GameObjects() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectActivation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectActivation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectActivation(ObjectActivation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectActivation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectActivation(ObjectActivation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1245};

/// @brief Field _gameObjects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____gameObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ObjectActivation, ____gameObjects) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ObjectActivation, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ObjectActivation);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ObjectActivation*, "VROSC", "ObjectActivation");
