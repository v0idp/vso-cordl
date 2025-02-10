#pragma once
// IWYU pragma private; include "VROSC/BandVisualizerTester.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BandVisualizerTester)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace VROSC {
class BandVisualizerTester;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BandVisualizerTester);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BandVisualizerTester
class CORDL_TYPE BandVisualizerTester : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _bandTransforms, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bandTransforms, put=__cordl_internal_set__bandTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  _bandTransforms;

/// @brief Field _currentPlayingOnly, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__currentPlayingOnly, put=__cordl_internal_set__currentPlayingOnly)) bool  _currentPlayingOnly;

/// @brief Field _numberOfBands, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__numberOfBands, put=__cordl_internal_set__numberOfBands)) int32_t  _numberOfBands;

/// @brief Method Awake, addr 0x1712144, size 0x1b8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::BandVisualizerTester* New_ctor() ;

/// @brief Method Update, addr 0x17122fc, size 0x12c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__bandTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__bandTransforms() ;

constexpr bool const& __cordl_internal_get__currentPlayingOnly() const;

constexpr bool& __cordl_internal_get__currentPlayingOnly() ;

constexpr int32_t const& __cordl_internal_get__numberOfBands() const;

constexpr int32_t& __cordl_internal_get__numberOfBands() ;

constexpr void __cordl_internal_set__bandTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  value) ;

constexpr void __cordl_internal_set__currentPlayingOnly(bool  value) ;

constexpr void __cordl_internal_set__numberOfBands(int32_t  value) ;

/// @brief Method .ctor, addr 0x1712428, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BandVisualizerTester() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BandVisualizerTester", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BandVisualizerTester(BandVisualizerTester && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BandVisualizerTester", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BandVisualizerTester(BandVisualizerTester const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{901};

/// @brief Field _numberOfBands, offset: 0x20, size: 0x4, def value: None
 int32_t  ____numberOfBands;

/// @brief Field _currentPlayingOnly, offset: 0x24, size: 0x1, def value: None
 bool  ____currentPlayingOnly;

/// @brief Field _bandTransforms, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  ____bandTransforms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BandVisualizerTester, ____numberOfBands) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::BandVisualizerTester, ____currentPlayingOnly) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::BandVisualizerTester, ____bandTransforms) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BandVisualizerTester, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BandVisualizerTester);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BandVisualizerTester*, "VROSC", "BandVisualizerTester");
