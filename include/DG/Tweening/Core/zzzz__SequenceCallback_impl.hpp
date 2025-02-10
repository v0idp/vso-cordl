#pragma once
// IWYU pragma private; include "DG/Tweening/Core/SequenceCallback.hpp"
#include "DG/Tweening/Core/zzzz__ABSSequentiable_impl.hpp"
#include "DG/Tweening/Core/zzzz__SequenceCallback_def.hpp"
#include "DG/Tweening/zzzz__TweenCallback_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Core::SequenceCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Core::SequenceCallback::*)(float_t, ::DG::Tweening::TweenCallback*)>(&::DG::Tweening::Core::SequenceCallback::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18e62f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::SequenceCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::TweenCallback*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void DG::Tweening::Core::SequenceCallback::_ctor(float_t  sequencedPosition, ::DG::Tweening::TweenCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::SequenceCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::TweenCallback*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sequencedPosition, callback);
}
inline ::DG::Tweening::Core::SequenceCallback* DG::Tweening::Core::SequenceCallback::New_ctor(float_t  sequencedPosition, ::DG::Tweening::TweenCallback*  callback)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Core::SequenceCallback*>(sequencedPosition, callback));
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::SequenceCallback::SequenceCallback()   {
}
