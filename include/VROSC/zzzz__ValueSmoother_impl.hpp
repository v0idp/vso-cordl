#pragma once
// IWYU pragma private; include "VROSC/ValueSmoother.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__ValueSmoother_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::ValueSmoother.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueSmoother::*)(::VROSC::Signal*)>(&::VROSC::ValueSmoother::NodeBegin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1721b38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueSmoother.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueSmoother::*)(::VROSC::Signal*)>(&::VROSC::ValueSmoother::NodeStay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1721d68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueSmoother.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueSmoother::*)(::VROSC::Signal*)>(&::VROSC::ValueSmoother::NodeEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1721d6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueSmoother.TransformValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Signal* (::VROSC::ValueSmoother::*)(::VROSC::Signal*)>(&::VROSC::ValueSmoother::TransformValue)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x1721b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                        "TransformValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueSmoother._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueSmoother::*)()>(&::VROSC::ValueSmoother::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1721d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::ValueSmoother::__cordl_internal_get__smoothFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothFrames;
}
constexpr int32_t const& VROSC::ValueSmoother::__cordl_internal_get__smoothFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothFrames;
}
constexpr void VROSC::ValueSmoother::__cordl_internal_set__smoothFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothFrames = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& VROSC::ValueSmoother::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& VROSC::ValueSmoother::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void VROSC::ValueSmoother::__cordl_internal_set__buffer(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ValueSmoother::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::ValueSmoother::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::ValueSmoother::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline ::VROSC::Signal* VROSC::ValueSmoother::TransformValue(::VROSC::Signal*  signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                        "TransformValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Signal*, false>(this, ___internal_method, signal);
}
inline void VROSC::ValueSmoother::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSmoother*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ValueSmoother* VROSC::ValueSmoother::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ValueSmoother*>());
}
// Ctor Parameters []
constexpr ::VROSC::ValueSmoother::ValueSmoother()   {
}
