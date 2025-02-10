#pragma once
// IWYU pragma private; include "DG/Tweening/TweenCallback_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(TweenCallback_1)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DG::Tweening {
template<typename T>
class TweenCallback_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::DG::Tweening::TweenCallback_1);
// Dependencies System.MulticastDelegate
namespace DG::Tweening {
// cpp template
template<typename T>
// Is value type: false
// CS Name: DG.Tweening.TweenCallback`1<T>
class CORDL_TYPE TweenCallback_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(T  value) ;

static inline ::DG::Tweening::TweenCallback_1<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TweenCallback_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TweenCallback_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TweenCallback_1(TweenCallback_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweenCallback_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweenCallback_1(TweenCallback_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10687};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DG::Tweening
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::DG::Tweening::TweenCallback_1, "DG.Tweening", "TweenCallback`1");
