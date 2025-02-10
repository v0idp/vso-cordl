#pragma once
// IWYU pragma private; include "VROSC/ClustrFrameVisuals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClustrFrameVisuals)
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
class ClustrFrameString;
}
namespace VROSC {
class MinMaxFloat;
}
namespace VROSC {
class NoteFieldMonitor;
}
// Forward declare root types
namespace VROSC {
class ClustrFrameVisuals;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ClustrFrameVisuals);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ClustrFrameVisuals
class CORDL_TYPE ClustrFrameVisuals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _clustrStringPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__clustrStringPrefab, put=__cordl_internal_set__clustrStringPrefab)) ::UnityW<::VROSC::ClustrFrameString>  _clustrStringPrefab;

/// @brief Field _height, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) ::VROSC::MinMaxFloat*  _height;

/// @brief Field _monitor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__monitor, put=__cordl_internal_set__monitor)) ::UnityW<::VROSC::NoteFieldMonitor>  _monitor;

/// @brief Field _strings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__strings, put=__cordl_internal_set__strings)) ::ArrayW<::UnityW<::VROSC::ClustrFrameString>,::Array<::UnityW<::VROSC::ClustrFrameString>>*>  _strings;

/// @brief Field _width, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__width, put=__cordl_internal_set__width)) ::VROSC::MinMaxFloat*  _width;

/// @brief Method GetAngleByNote, addr 0x17adbb8, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetAngleByNote(int32_t  note) ;

static inline ::VROSC::ClustrFrameVisuals* New_ctor() ;

/// @brief Method OnDisable, addr 0x17ad798, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x17adc14, size 0x2f0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Start, addr 0x17ad5ec, size 0x1ac, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x17ad808, size 0x3b0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::ClustrFrameString> const& __cordl_internal_get__clustrStringPrefab() const;

constexpr ::UnityW<::VROSC::ClustrFrameString>& __cordl_internal_get__clustrStringPrefab() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__height() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__height() ;

constexpr ::UnityW<::VROSC::NoteFieldMonitor> const& __cordl_internal_get__monitor() const;

constexpr ::UnityW<::VROSC::NoteFieldMonitor>& __cordl_internal_get__monitor() ;

constexpr ::ArrayW<::UnityW<::VROSC::ClustrFrameString>,::Array<::UnityW<::VROSC::ClustrFrameString>>*> const& __cordl_internal_get__strings() const;

constexpr ::ArrayW<::UnityW<::VROSC::ClustrFrameString>,::Array<::UnityW<::VROSC::ClustrFrameString>>*>& __cordl_internal_get__strings() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__width() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__width() ;

constexpr void __cordl_internal_set__clustrStringPrefab(::UnityW<::VROSC::ClustrFrameString>  value) ;

constexpr void __cordl_internal_set__height(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__monitor(::UnityW<::VROSC::NoteFieldMonitor>  value) ;

constexpr void __cordl_internal_set__strings(::ArrayW<::UnityW<::VROSC::ClustrFrameString>,::Array<::UnityW<::VROSC::ClustrFrameString>>*>  value) ;

constexpr void __cordl_internal_set__width(::VROSC::MinMaxFloat*  value) ;

/// @brief Method .ctor, addr 0x17adf04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClustrFrameVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClustrFrameVisuals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClustrFrameVisuals(ClustrFrameVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClustrFrameVisuals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClustrFrameVisuals(ClustrFrameVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1425};

/// @brief Field _height, offset: 0x20, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____height;

/// @brief Field _width, offset: 0x28, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____width;

/// @brief Field _clustrStringPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::ClustrFrameString>  ____clustrStringPrefab;

/// @brief Field _monitor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteFieldMonitor>  ____monitor;

/// @brief Field _strings, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::ClustrFrameString>,::Array<::UnityW<::VROSC::ClustrFrameString>>*>  ____strings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ClustrFrameVisuals, ____height) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrFrameVisuals, ____width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrFrameVisuals, ____clustrStringPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrFrameVisuals, ____monitor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrFrameVisuals, ____strings) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ClustrFrameVisuals, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ClustrFrameVisuals);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrFrameVisuals*, "VROSC", "ClustrFrameVisuals");
