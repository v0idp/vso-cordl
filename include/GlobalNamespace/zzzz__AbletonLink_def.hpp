#pragma once
// IWYU pragma private; include "GlobalNamespace/AbletonLink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AbletonLink)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class AbletonLink;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AbletonLink);
// Dependencies System.IDisposable, System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AbletonLink
class CORDL_TYPE AbletonLink : public ::System::Object {
public:
// Declarations
/// @brief Field nativeInstance, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nativeInstance, put=__cordl_internal_set_nativeInstance)) ::System::IntPtr  nativeInstance;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CreateAbletonLink, addr 0x16b6374, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateAbletonLink() ;

/// @brief Method DestroyAbletonLink, addr 0x16b64c4, size 0x7c, virtual false, abstract: false, final false
static inline void DestroyAbletonLink(::System::IntPtr  ptr) ;

/// @brief Method Dispose, addr 0x16b6494, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Enable, addr 0x16b699c, size 0xc, virtual false, abstract: false, final false
inline void Enable(bool  bEnable) ;

/// @brief Method Finalize, addr 0x16b6400, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method ForceBeatAtTime, addr 0x16b6880, size 0x8, virtual false, abstract: false, final false
inline void ForceBeatAtTime(double_t  beat) ;

/// @brief Method IsEnabled, addr 0x16b6a2c, size 0x8, virtual false, abstract: false, final false
inline bool IsEnabled() ;

static inline ::GlobalNamespace::AbletonLink* New_ctor() ;

/// @brief Method NumPeers, addr 0x16b6aac, size 0x8, virtual false, abstract: false, final false
inline int32_t NumPeers() ;

/// @brief Method Quantum, addr 0x16b67f0, size 0x8, virtual false, abstract: false, final false
inline double_t Quantum() ;

/// @brief Method RequestBeatAtTime, addr 0x16b6910, size 0x8, virtual false, abstract: false, final false
inline void RequestBeatAtTime(double_t  beat) ;

/// @brief Method SetQuantum, addr 0x16b676c, size 0x8, virtual false, abstract: false, final false
inline void SetQuantum(double_t  quantum) ;

/// @brief Method SetTempo, addr 0x16b6658, size 0x8, virtual false, abstract: false, final false
inline void SetTempo(double_t  bpm) ;

/// @brief Method Setup, addr 0x16b65c8, size 0x8, virtual false, abstract: false, final false
inline void Setup(double_t  bpm) ;

/// @brief Method Tempo, addr 0x16b66dc, size 0x8, virtual false, abstract: false, final false
inline double_t Tempo() ;

/// @brief Method Update, addr 0x16b6b68, size 0x8, virtual false, abstract: false, final false
inline void Update(::ByRef<double_t>  beat, ::ByRef<double_t>  phase, ::ByRef<double_t>  tempo, ::ByRef<double_t>  time, ::ByRef<int32_t>  numPeers) ;

constexpr ::System::IntPtr const& __cordl_internal_get_nativeInstance() const;

constexpr ::System::IntPtr& __cordl_internal_get_nativeInstance() ;

constexpr void __cordl_internal_set_nativeInstance(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x16b63dc, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method enable, addr 0x16b6918, size 0x84, virtual false, abstract: false, final false
static inline void enable(::System::IntPtr  ptr, bool  bEnable) ;

/// @brief Method forceBeatAtTime, addr 0x16b67f8, size 0x88, virtual false, abstract: false, final false
static inline void forceBeatAtTime(::System::IntPtr  ptr, double_t  beat) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method isEnabled, addr 0x16b69a8, size 0x84, virtual false, abstract: false, final false
static inline bool isEnabled(::System::IntPtr  ptr) ;

/// @brief Method numPeers, addr 0x16b6a34, size 0x78, virtual false, abstract: false, final false
static inline int32_t numPeers(::System::IntPtr  ptr) ;

/// @brief Method quantum, addr 0x16b6774, size 0x7c, virtual false, abstract: false, final false
static inline double_t quantum(::System::IntPtr  ptr) ;

/// @brief Method requestBeatAtTime, addr 0x16b6888, size 0x88, virtual false, abstract: false, final false
static inline void requestBeatAtTime(::System::IntPtr  ptr, double_t  beat) ;

/// @brief Method setQuantum, addr 0x16b66e4, size 0x88, virtual false, abstract: false, final false
static inline void setQuantum(::System::IntPtr  ptr, double_t  quantum) ;

/// @brief Method setTempo, addr 0x16b65d0, size 0x88, virtual false, abstract: false, final false
static inline void setTempo(::System::IntPtr  ptr, double_t  bpm) ;

/// @brief Method setup, addr 0x16b6540, size 0x88, virtual false, abstract: false, final false
static inline void setup(::System::IntPtr  ptr, double_t  bpm) ;

/// @brief Method tempo, addr 0x16b6660, size 0x7c, virtual false, abstract: false, final false
static inline double_t tempo(::System::IntPtr  ptr) ;

/// @brief Method update, addr 0x16b6ab4, size 0xb4, virtual false, abstract: false, final false
static inline void update(::System::IntPtr  ptr, ::ByRef<double_t>  beat, ::ByRef<double_t>  phase, ::ByRef<double_t>  tempo, ::ByRef<double_t>  time, ::ByRef<int32_t>  numPeers) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbletonLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbletonLink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbletonLink(AbletonLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbletonLink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbletonLink(AbletonLink const& ) = delete;

/// @brief Field DllName offset 0xffffffff size 0x8
static constexpr ::ConstString  DllName{u"UnityAbletonLink"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1};

/// @brief Field nativeInstance, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___nativeInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AbletonLink, ___nativeInstance) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AbletonLink, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AbletonLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AbletonLink*, "", "AbletonLink");
