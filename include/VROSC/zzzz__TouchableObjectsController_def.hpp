#pragma once
// IWYU pragma private; include "VROSC/TouchableObjectsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchableObjectsController)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
struct NoteBoard_PlayAxis;
}
namespace VROSC {
class TouchableObject;
}
// Forward declare root types
namespace VROSC {
class TouchableObjectsController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TouchableObjectsController);
// Dependencies UnityEngine.MonoBehaviour, VROSC.Scale
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TouchableObjectsController
class CORDL_TYPE TouchableObjectsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _checkPosition, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__checkPosition, put=__cordl_internal_set__checkPosition)) ::UnityW<::UnityEngine::Transform>  _checkPosition;

/// @brief Field _depth, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__depth, put=__cordl_internal_set__depth)) int32_t  _depth;

/// @brief Field _height, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) int32_t  _height;

/// @brief Field _notes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__notes, put=__cordl_internal_set__notes)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::TouchableObject>>*  _notes;

/// @brief Field _size, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) float_t  _size;

/// @brief Field _width, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__width, put=__cordl_internal_set__width)) int32_t  _width;

/// @brief Field previewScale, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_previewScale, put=__cordl_internal_set_previewScale)) ::VROSC::Scale  previewScale;

static inline ::VROSC::TouchableObjectsController* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x176e940, size 0xac, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method ProcessFrame, addr 0x176e498, size 0x360, virtual false, abstract: false, final false
inline void ProcessFrame(bool  updatePlaying, bool  playing, ::VROSC::NoteBoard_PlayAxis  playAxis) ;

/// @brief Method Setup, addr 0x176dfa0, size 0x4f8, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateAll, addr 0x176e7f8, size 0x148, virtual false, abstract: false, final false
inline void UpdateAll() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__checkPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__checkPosition() ;

constexpr int32_t const& __cordl_internal_get__depth() const;

constexpr int32_t& __cordl_internal_get__depth() ;

constexpr int32_t const& __cordl_internal_get__height() const;

constexpr int32_t& __cordl_internal_get__height() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::TouchableObject>>* const& __cordl_internal_get__notes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::TouchableObject>>*& __cordl_internal_get__notes() ;

constexpr float_t const& __cordl_internal_get__size() const;

constexpr float_t& __cordl_internal_get__size() ;

constexpr int32_t const& __cordl_internal_get__width() const;

constexpr int32_t& __cordl_internal_get__width() ;

constexpr ::VROSC::Scale const& __cordl_internal_get_previewScale() const;

constexpr ::VROSC::Scale& __cordl_internal_get_previewScale() ;

constexpr void __cordl_internal_set__checkPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__depth(int32_t  value) ;

constexpr void __cordl_internal_set__height(int32_t  value) ;

constexpr void __cordl_internal_set__notes(::System::Collections::Generic::List_1<::UnityW<::VROSC::TouchableObject>>*  value) ;

constexpr void __cordl_internal_set__size(float_t  value) ;

constexpr void __cordl_internal_set__width(int32_t  value) ;

constexpr void __cordl_internal_set_previewScale(::VROSC::Scale  value) ;

/// @brief Method .ctor, addr 0x176e9ec, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchableObjectsController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchableObjectsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchableObjectsController(TouchableObjectsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchableObjectsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchableObjectsController(TouchableObjectsController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1224};

/// @brief Field _notes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::TouchableObject>>*  ____notes;

/// @brief Field _checkPosition, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____checkPosition;

/// @brief Field _height, offset: 0x30, size: 0x4, def value: None
 int32_t  ____height;

/// @brief Field _width, offset: 0x34, size: 0x4, def value: None
 int32_t  ____width;

/// @brief Field _depth, offset: 0x38, size: 0x4, def value: None
 int32_t  ____depth;

/// @brief Field _size, offset: 0x3c, size: 0x4, def value: None
 float_t  ____size;

/// @brief Field previewScale, offset: 0x40, size: 0x4, def value: None
 ::VROSC::Scale  ___previewScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TouchableObjectsController, ____notes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObjectsController, ____checkPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObjectsController, ____height) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObjectsController, ____width) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObjectsController, ____depth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObjectsController, ____size) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObjectsController, ___previewScale) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TouchableObjectsController, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TouchableObjectsController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TouchableObjectsController*, "VROSC", "TouchableObjectsController");
