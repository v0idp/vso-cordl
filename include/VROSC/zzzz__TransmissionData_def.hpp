#pragma once
// IWYU pragma private; include "VROSC/TransmissionData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransmissionData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class NetNoteboard;
}
namespace VROSC {
class NoteBoardNoteController;
}
namespace VROSC {
class NoteBoardNote;
}
namespace VROSC {
struct NotefieldColorSettings_SpreadType;
}
namespace VROSC {
class NotefieldColorSettings;
}
// Forward declare root types
namespace VROSC {
struct TransmissionData;
}
// Write type traits
MARK_VAL_T(::VROSC::TransmissionData);
// Dependencies UnityEngine.Vector3
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TransmissionData
struct CORDL_TYPE TransmissionData {
public:
// Declarations
/// @brief Method Draw, addr 0x17b7418, size 0x80, virtual false, abstract: false, final false
inline void Draw(::UnityEngine::Vector3  source) ;

/// @brief Method GetSameData, addr 0x17b7498, size 0x10c, virtual false, abstract: false, final false
static inline ::VROSC::TransmissionData GetSameData(::VROSC::NoteBoardNote*  otherNote, ::VROSC::NotefieldColorSettings*  settings, int32_t  note, int32_t  index, float_t  step, ::UnityEngine::Vector3  axis) ;

/// @brief Method GetTransmissionData, addr 0x17b2f48, size 0x804, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::VROSC::TransmissionData>* GetTransmissionData(::VROSC::NoteBoardNoteController*  controller, int32_t  noteNumberX, int32_t  noteNumberY, int32_t  noteNumberZ, ::VROSC::NotefieldColorSettings*  settings, ::System::Object*  allNotes) ;

/// @brief Method GetTransmissionDataXY, addr 0x17b443c, size 0x340, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::VROSC::TransmissionData>* GetTransmissionDataXY(::VROSC::NetNoteboard*  controller, int32_t  noteNumberX, int32_t  noteNumberY, ::VROSC::NotefieldColorSettings*  settings, ::System::Object*  XYNotes) ;

/// @brief Method GetTransmissionDataXZ, addr 0x17b477c, size 0x34c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::VROSC::TransmissionData>* GetTransmissionDataXZ(::VROSC::NetNoteboard*  controller, int32_t  noteNumberX, int32_t  noteNumberZ, ::VROSC::NotefieldColorSettings*  settings, ::System::Object*  XZNotes) ;

/// @brief Method GetTransmissionDataYZ, addr 0x17b4ac8, size 0x340, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::VROSC::TransmissionData>* GetTransmissionDataYZ(::VROSC::NetNoteboard*  controller, int32_t  noteNumberY, int32_t  noteNumberZ, ::VROSC::NotefieldColorSettings*  settings, ::System::Object*  YZNotes) ;

/// @brief Method Transmit, addr 0x17b7238, size 0x148, virtual false, abstract: false, final false
inline void Transmit(::UnityEngine::Vector3  power, ::VROSC::NotefieldColorSettings_SpreadType  spread) ;

/// @brief Method TransmitHovering, addr 0x17b73ac, size 0x58, virtual false, abstract: false, final false
inline void TransmitHovering(float_t  hoveringAmount) ;

/// @brief Method .ctor, addr 0x17b7224, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::VROSC::NoteBoardNote*  noteBoardNote, ::UnityEngine::Vector3  influence, float_t  fullInfluence, float_t  hoverInfluence) ;

/// @brief Method .ctor, addr 0x17b7200, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::VROSC::NoteBoardNote*  noteBoardNote, ::UnityEngine::Vector3  invertedInfluence) ;

// Ctor Parameters []
// @brief default ctor
constexpr TransmissionData() ;

// Ctor Parameters [CppParam { name: "_noteBoardNote", ty: "::UnityW<::VROSC::NoteBoardNote>", modifiers: "", def_value: None }, CppParam { name: "_invertedInfluence", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_fullInfluence", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_hoverInfluence", ty: "float_t", modifiers: "", def_value: None }]
constexpr TransmissionData(::UnityW<::VROSC::NoteBoardNote>  _noteBoardNote, ::UnityEngine::Vector3  _invertedInfluence, float_t  _fullInfluence, float_t  _hoverInfluence) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1456};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _noteBoardNote, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  _noteBoardNote;

/// @brief Field _invertedInfluence, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  _invertedInfluence;

/// @brief Field _fullInfluence, offset: 0x14, size: 0x4, def value: None
 float_t  _fullInfluence;

/// @brief Field _hoverInfluence, offset: 0x18, size: 0x4, def value: None
 float_t  _hoverInfluence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransmissionData, _noteBoardNote) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransmissionData, _invertedInfluence) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransmissionData, _fullInfluence) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransmissionData, _hoverInfluence) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransmissionData, 0x20>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransmissionData, "VROSC", "TransmissionData");
