#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/CloudGlobalColors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CloudGlobalColors)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
namespace VROSC::AudioReactive {
class CloudGlobalColors_ColorChannel;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class CloudGlobalColors;
}
namespace VROSC::AudioReactive {
class CloudGlobalColors_ColorChannel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::CloudGlobalColors);
MARK_REF_PTR_T(::VROSC::AudioReactive::CloudGlobalColors_ColorChannel);
// Dependencies System.Object, UnityEngine.Vector4
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.CloudGlobalColors/ColorChannel
class CORDL_TYPE CloudGlobalColors_ColorChannel : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Amount, put=set_Amount)) float_t  Amount;

 __declspec(property(get=get_Output)) ::UnityEngine::Vector4  Output;

/// @brief Field <Amount>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Amount_k__BackingField, put=__cordl_internal_set__Amount_k__BackingField)) float_t  _Amount_k__BackingField;

/// @brief Field _index, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Field _output, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::UnityEngine::Vector4  _output;

static inline ::VROSC::AudioReactive::CloudGlobalColors_ColorChannel* New_ctor() ;

/// @brief Method SetColor, addr 0x17d9a30, size 0xc, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method Setup, addr 0x17d97f8, size 0x10, virtual false, abstract: false, final false
inline void Setup(int32_t  index, ::UnityEngine::Color  color) ;

/// @brief Method UpdateAmount, addr 0x17d99d4, size 0x5c, virtual false, abstract: false, final false
inline bool UpdateAmount(float_t  amount) ;

constexpr float_t const& __cordl_internal_get__Amount_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Amount_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__output() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get__output() ;

constexpr void __cordl_internal_set__Amount_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

constexpr void __cordl_internal_set__output(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0x17d97a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Amount, addr 0x17d9a58, size 0x8, virtual false, abstract: false, final false
inline float_t get_Amount() ;

/// @brief Method get_Output, addr 0x17d9a4c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_Output() ;

/// @brief Method set_Amount, addr 0x17d9a60, size 0x8, virtual false, abstract: false, final false
inline void set_Amount(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudGlobalColors_ColorChannel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudGlobalColors_ColorChannel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudGlobalColors_ColorChannel(CloudGlobalColors_ColorChannel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudGlobalColors_ColorChannel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudGlobalColors_ColorChannel(CloudGlobalColors_ColorChannel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1554};

/// @brief Field <Amount>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  ____Amount_k__BackingField;

/// @brief Field _index, offset: 0x14, size: 0x4, def value: None
 int32_t  ____index;

/// @brief Field _output, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Vector4  ____output;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::CloudGlobalColors_ColorChannel, ____Amount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CloudGlobalColors_ColorChannel, ____index) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CloudGlobalColors_ColorChannel, ____output) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::CloudGlobalColors_ColorChannel, 0x28>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.CloudGlobalColors
class CORDL_TYPE CloudGlobalColors : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ColorChannel = ::VROSC::AudioReactive::CloudGlobalColors_ColorChannel;

/// @brief Field _channelCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__channelCount, put=__cordl_internal_set__channelCount)) int32_t  _channelCount;

/// @brief Field _channels, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__channels, put=__cordl_internal_set__channels)) ::ArrayW<::VROSC::AudioReactive::CloudGlobalColors_ColorChannel*,::Array<::VROSC::AudioReactive::CloudGlobalColors_ColorChannel*>*>  _channels;

/// @brief Field _colors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _colors;

/// @brief Field _outputColors, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputColors, put=__cordl_internal_set__outputColors)) ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  _outputColors;

/// @brief Field _timings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__timings, put=__cordl_internal_set__timings)) ::ArrayW<float_t,::Array<float_t>*>  _timings;

/// @brief Field _valueCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueCurve, put=__cordl_internal_set__valueCurve)) ::UnityEngine::AnimationCurve*  _valueCurve;

/// @brief Method Awake, addr 0x17d963c, size 0x16c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetRandomColor, addr 0x17d97b0, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetRandomColor() ;

static inline ::VROSC::AudioReactive::CloudGlobalColors* New_ctor() ;

/// @brief Method Update, addr 0x17d9808, size 0x1cc, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get__channelCount() const;

constexpr int32_t& __cordl_internal_get__channelCount() ;

constexpr ::ArrayW<::VROSC::AudioReactive::CloudGlobalColors_ColorChannel*,::Array<::VROSC::AudioReactive::CloudGlobalColors_ColorChannel*>*> const& __cordl_internal_get__channels() const;

constexpr ::ArrayW<::VROSC::AudioReactive::CloudGlobalColors_ColorChannel*,::Array<::VROSC::AudioReactive::CloudGlobalColors_ColorChannel*>*>& __cordl_internal_get__channels() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__colors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__colors() ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__outputColors() const;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__outputColors() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__timings() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__timings() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__valueCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__valueCurve() ;

constexpr void __cordl_internal_set__channelCount(int32_t  value) ;

constexpr void __cordl_internal_set__channels(::ArrayW<::VROSC::AudioReactive::CloudGlobalColors_ColorChannel*,::Array<::VROSC::AudioReactive::CloudGlobalColors_ColorChannel*>*>  value) ;

constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__outputColors(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value) ;

constexpr void __cordl_internal_set__timings(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__valueCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x17d9a3c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudGlobalColors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudGlobalColors", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudGlobalColors(CloudGlobalColors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudGlobalColors", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudGlobalColors(CloudGlobalColors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1555};

/// @brief Field _channelCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ____channelCount;

/// @brief Field _colors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____colors;

/// @brief Field _valueCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____valueCurve;

/// @brief Field _channels, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::VROSC::AudioReactive::CloudGlobalColors_ColorChannel*,::Array<::VROSC::AudioReactive::CloudGlobalColors_ColorChannel*>*>  ____channels;

/// @brief Field _timings, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____timings;

/// @brief Field _outputColors, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  ____outputColors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::CloudGlobalColors, ____channelCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CloudGlobalColors, ____colors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CloudGlobalColors, ____valueCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CloudGlobalColors, ____channels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CloudGlobalColors, ____timings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CloudGlobalColors, ____outputColors) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::CloudGlobalColors, 0x50>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::CloudGlobalColors);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::CloudGlobalColors*, "VROSC.AudioReactive", "CloudGlobalColors");
NEED_NO_BOX(::VROSC::AudioReactive::CloudGlobalColors_ColorChannel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::CloudGlobalColors_ColorChannel*, "VROSC.AudioReactive", "CloudGlobalColors/ColorChannel");
