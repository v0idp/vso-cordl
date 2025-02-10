#pragma once
// IWYU pragma private; include "VROSC/LoopArrangeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopArrangeData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class LoopPlayer;
}
// Forward declare root types
namespace VROSC {
struct LoopArrangeData;
}
// Write type traits
MARK_VAL_T(::VROSC::LoopArrangeData);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopArrangeData
struct CORDL_TYPE LoopArrangeData {
public:
// Declarations
 __declspec(property(get=get_LoopPlayer)) ::UnityW<::VROSC::LoopPlayer>  LoopPlayer;

 __declspec(property(get=get_OffsetToReference)) int32_t  OffsetToReference;

/// @brief Method GetArrangeData, addr 0x18b9b40, size 0x2f8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>* GetArrangeData(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  loops, ::VROSC::LoopPlayer*  reference) ;

/// @brief Method GetArrangeDataUsingLongestAsReference, addr 0x18b9a18, size 0x68, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>* GetArrangeDataUsingLongestAsReference(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  loops) ;

/// @brief Method GetLongestLoopIndex, addr 0x18b9a80, size 0xc0, virtual false, abstract: false, final false
static inline int32_t GetLongestLoopIndex(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  loops) ;

/// @brief Method GetOffsetToReference, addr 0x18b9e38, size 0xd4, virtual false, abstract: false, final false
static inline int32_t GetOffsetToReference(::VROSC::LoopPlayer*  loop, int32_t  referenceOffset) ;

/// @brief Method .ctor, addr 0x18b9a0c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::VROSC::LoopPlayer*  loopPlayer, int32_t  offset) ;

/// @brief Method get_LoopPlayer, addr 0x18b99fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayer> get_LoopPlayer() ;

/// @brief Method get_OffsetToReference, addr 0x18b9a04, size 0x8, virtual false, abstract: false, final false
inline int32_t get_OffsetToReference() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopArrangeData() ;

// Ctor Parameters [CppParam { name: "_LoopPlayer_k__BackingField", ty: "::UnityW<::VROSC::LoopPlayer>", modifiers: "", def_value: None }, CppParam { name: "_OffsetToReference_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoopArrangeData(::UnityW<::VROSC::LoopPlayer>  _LoopPlayer_k__BackingField, int32_t  _OffsetToReference_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{733};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LoopPlayer>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  _LoopPlayer_k__BackingField;

/// @brief Field <OffsetToReference>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _OffsetToReference_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopArrangeData, _LoopPlayer_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopArrangeData, _OffsetToReference_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopArrangeData, 0x10>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopArrangeData, "VROSC", "LoopArrangeData");
