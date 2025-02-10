#pragma once
// IWYU pragma private; include "UnityEngine/AudioClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioClip)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip_PCMReaderCallback;
}
namespace UnityEngine {
class AudioClip_PCMSetPositionCallback;
}
// Forward declare root types
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioClip_PCMReaderCallback;
}
namespace UnityEngine {
class AudioClip_PCMSetPositionCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioClip);
MARK_REF_PTR_T(::UnityEngine::AudioClip_PCMReaderCallback);
MARK_REF_PTR_T(::UnityEngine::AudioClip_PCMSetPositionCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioClip/PCMReaderCallback
class CORDL_TYPE AudioClip_PCMReaderCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x2f58408, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<float_t,::Array<float_t>*>  data) ;

static inline ::UnityEngine::AudioClip_PCMReaderCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x2f5836c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClip_PCMReaderCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMReaderCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClip_PCMReaderCallback(AudioClip_PCMReaderCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMReaderCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClip_PCMReaderCallback(AudioClip_PCMReaderCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12123};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioClip_PCMReaderCallback, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioClip/PCMSetPositionCallback
class CORDL_TYPE AudioClip_PCMSetPositionCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x2f584a8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  position) ;

static inline ::UnityEngine::AudioClip_PCMSetPositionCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x2f5841c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClip_PCMSetPositionCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMSetPositionCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClip_PCMSetPositionCallback(AudioClip_PCMSetPositionCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMSetPositionCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClip_PCMSetPositionCallback(AudioClip_PCMSetPositionCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12124};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioClip_PCMSetPositionCallback, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioClip
class CORDL_TYPE AudioClip : public ::UnityEngine::Object {
public:
// Declarations
using PCMReaderCallback = ::UnityEngine::AudioClip_PCMReaderCallback;

using PCMSetPositionCallback = ::UnityEngine::AudioClip_PCMSetPositionCallback;

 __declspec(property(get=get_channels)) int32_t  channels;

 __declspec(property(get=get_frequency)) int32_t  frequency;

 __declspec(property(get=get_length)) float_t  length;

/// @brief Field m_PCMReaderCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PCMReaderCallback, put=__cordl_internal_set_m_PCMReaderCallback)) ::UnityEngine::AudioClip_PCMReaderCallback*  m_PCMReaderCallback;

/// @brief Field m_PCMSetPositionCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PCMSetPositionCallback, put=__cordl_internal_set_m_PCMSetPositionCallback)) ::UnityEngine::AudioClip_PCMSetPositionCallback*  m_PCMSetPositionCallback;

 __declspec(property(get=get_samples)) int32_t  samples;

/// @brief Method Construct_Internal, addr 0x2f57998, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> Construct_Internal() ;

/// @brief Method Create, addr 0x2f57f0c, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream) ;

/// @brief Method Create, addr 0x2f57f1c, size 0x1a8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream, ::UnityEngine::AudioClip_PCMReaderCallback*  pcmreadercallback, ::UnityEngine::AudioClip_PCMSetPositionCallback*  pcmsetpositioncallback) ;

/// @brief Method CreateUserSound, addr 0x2f579fc, size 0x74, virtual false, abstract: false, final false
inline void CreateUserSound(::StringW  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream) ;

/// @brief Method GetData, addr 0x2f578e0, size 0x5c, virtual false, abstract: false, final false
static inline bool GetData(::UnityEngine::AudioClip*  clip, ::ByRef<::ArrayW<float_t,::Array<float_t>*>>  data, int32_t  numSamples, int32_t  samplesOffset) ;

/// @brief Method GetData, addr 0x2f57b60, size 0x188, virtual false, abstract: false, final false
inline bool GetData(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  offsetSamples) ;

/// @brief Method GetName, addr 0x2f579c0, size 0x3c, virtual false, abstract: false, final false
inline ::StringW GetName() ;

/// @brief Method InvokePCMReaderCallback_Internal, addr 0x2f58334, size 0x1c, virtual false, abstract: false, final false
inline void InvokePCMReaderCallback_Internal(::ArrayW<float_t,::Array<float_t>*>  data) ;

/// @brief Method InvokePCMSetPositionCallback_Internal, addr 0x2f58350, size 0x1c, virtual false, abstract: false, final false
inline void InvokePCMSetPositionCallback_Internal(int32_t  position) ;

static inline ::UnityEngine::AudioClip* New_ctor() ;

/// @brief Method SetData, addr 0x2f5793c, size 0x5c, virtual false, abstract: false, final false
static inline bool SetData(::UnityEngine::AudioClip*  clip, ::ArrayW<float_t,::Array<float_t>*>  data, int32_t  numsamples, int32_t  samplesOffset) ;

/// @brief Method SetData, addr 0x2f57ce8, size 0x224, virtual false, abstract: false, final false
inline bool SetData(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  offsetSamples) ;

constexpr ::UnityEngine::AudioClip_PCMReaderCallback* const& __cordl_internal_get_m_PCMReaderCallback() const;

constexpr ::UnityEngine::AudioClip_PCMReaderCallback*& __cordl_internal_get_m_PCMReaderCallback() ;

constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback* const& __cordl_internal_get_m_PCMSetPositionCallback() const;

constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback*& __cordl_internal_get_m_PCMSetPositionCallback() ;

constexpr void __cordl_internal_set_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback*  value) ;

constexpr void __cordl_internal_set_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback*  value) ;

/// @brief Method .ctor, addr 0x2f57884, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_m_PCMReaderCallback, addr 0x2f580c4, size 0x9c, virtual false, abstract: false, final false
inline void add_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback*  value) ;

/// @brief Method add_m_PCMSetPositionCallback, addr 0x2f58160, size 0x9c, virtual false, abstract: false, final false
inline void add_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback*  value) ;

/// @brief Method get_channels, addr 0x2f57ae8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_channels() ;

/// @brief Method get_frequency, addr 0x2f57b24, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_frequency() ;

/// @brief Method get_length, addr 0x2f57a70, size 0x3c, virtual false, abstract: false, final false
inline float_t get_length() ;

/// @brief Method get_samples, addr 0x2f57aac, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_samples() ;

/// @brief Method remove_m_PCMReaderCallback, addr 0x2f581fc, size 0x9c, virtual false, abstract: false, final false
inline void remove_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback*  value) ;

/// @brief Method remove_m_PCMSetPositionCallback, addr 0x2f58298, size 0x9c, virtual false, abstract: false, final false
inline void remove_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClip", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClip(AudioClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClip", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClip(AudioClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12125};

/// @brief Field m_PCMReaderCallback, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AudioClip_PCMReaderCallback*  ___m_PCMReaderCallback;

/// @brief Field m_PCMSetPositionCallback, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AudioClip_PCMSetPositionCallback*  ___m_PCMSetPositionCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AudioClip, ___m_PCMReaderCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AudioClip, ___m_PCMSetPositionCallback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioClip, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AudioClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioClip*, "UnityEngine", "AudioClip");
NEED_NO_BOX(::UnityEngine::AudioClip_PCMReaderCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioClip_PCMReaderCallback*, "UnityEngine", "AudioClip/PCMReaderCallback");
NEED_NO_BOX(::UnityEngine::AudioClip_PCMSetPositionCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioClip_PCMSetPositionCallback*, "UnityEngine", "AudioClip/PCMSetPositionCallback");
