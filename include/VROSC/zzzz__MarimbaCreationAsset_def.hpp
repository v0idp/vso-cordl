#pragma once
// IWYU pragma private; include "VROSC/MarimbaCreationAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MarimbaCreationAsset)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class MarimbaCreationBehaviour;
}
namespace VROSC {
class Marimba;
}
// Forward declare root types
namespace VROSC {
class MarimbaCreationAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MarimbaCreationAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MarimbaCreationAsset
class CORDL_TYPE MarimbaCreationAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::MarimbaCreationBehaviour*  _cordl_template;

/// @brief Field _fromPoint, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__fromPoint, put=__cordl_internal_set__fromPoint)) ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  _fromPoint;

/// @brief Field _marimba, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__marimba, put=__cordl_internal_set__marimba)) ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::Marimba>>  _marimba;

/// @brief Field _posOffset, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__posOffset, put=__cordl_internal_set__posOffset)) float_t  _posOffset;

/// @brief Field _rotOffset, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotOffset, put=__cordl_internal_set__rotOffset)) float_t  _rotOffset;

/// @brief Method CreatePlayable, addr 0x176a88c, size 0x178, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::MarimbaCreationAsset* New_ctor() ;

constexpr ::VROSC::MarimbaCreationBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::MarimbaCreationBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__fromPoint() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__fromPoint() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::Marimba>> const& __cordl_internal_get__marimba() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::Marimba>>& __cordl_internal_get__marimba() ;

constexpr float_t const& __cordl_internal_get__posOffset() const;

constexpr float_t& __cordl_internal_get__posOffset() ;

constexpr float_t const& __cordl_internal_get__rotOffset() const;

constexpr float_t& __cordl_internal_get__rotOffset() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::MarimbaCreationBehaviour*  value) ;

constexpr void __cordl_internal_set__fromPoint(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__marimba(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::Marimba>>  value) ;

constexpr void __cordl_internal_set__posOffset(float_t  value) ;

constexpr void __cordl_internal_set__rotOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x176ae7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarimbaCreationAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarimbaCreationAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarimbaCreationAsset(MarimbaCreationAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarimbaCreationAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarimbaCreationAsset(MarimbaCreationAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1212};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::MarimbaCreationBehaviour*  ____cordl_template;

/// @brief Field _fromPoint, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  ____fromPoint;

/// @brief Field _marimba, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::Marimba>>  ____marimba;

/// @brief Field _posOffset, offset: 0x40, size: 0x4, def value: None
 float_t  ____posOffset;

/// @brief Field _rotOffset, offset: 0x44, size: 0x4, def value: None
 float_t  ____rotOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MarimbaCreationAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationAsset, ____fromPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationAsset, ____marimba) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationAsset, ____posOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationAsset, ____rotOffset) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MarimbaCreationAsset, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MarimbaCreationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MarimbaCreationAsset*, "VROSC", "MarimbaCreationAsset");
